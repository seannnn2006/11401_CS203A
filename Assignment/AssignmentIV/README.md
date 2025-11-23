# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [曾偉翔]  
Email: [kkevin9563@gmail.com]  
開發環境: [Windows] 

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```
  int myHashInt(int key, int m) {
    if(m <= 0) return -1; 
    unsigned int hash = (unsigned int)key * 41 + 17;
    hash ^= (key * 59 + 19); 
    int index = (int)(hash % m);
    return index;}
  ```
- Rationale: [Explain your design choices and how they minimize collisions.]
- 檢查輸入:if(m <= 0) return -1; (確保hash table 大小合法)
- 乘加運算:unsigned int hash = (unsigned int)key * 41 + 17;
- XOR混合:hash ^= (key * 59 + 19); 
- 多層混合:乘數+XOR，避免單純線性關係，打散規律
- 質數選擇:乘數與偏移量選質數，減少模式化分布
- 位元打散:XOR能混合高位與低位資訊，降低集中度

### Non-integer Keys
- Formula / pseudocode:
  ```text
  int myHashString(const char* str, int m) {
    if (m <= 0 || str == NULL || strlen(str) == 0) return -1;

    const int a = 31;
    const int b = 17;

    unsigned long long hash = 0;

    
    for (int i = 0; str[i] != '\0'; i++) {
        hash = (hash + a * (unsigned char)str[i] + b) % m;
    }

    return (int)hash;}
  ```
- Rationale: [Explain your approach and its effectiveness for non-integer keys.]
- 檢查輸入:if (m <= 0 || str == NULL || strlen(str) == 0) return -1;(確保hash table 大小合法)
- 常數選擇:a=31(打散字元規律性),b=17(避免字串只有一個字元)
- 逐字元累加:透過逐字元處理，將字串轉換成一個整數雜湊值，方便映射至hash table
- 字串轉數值:將字元逐一轉換成整數
- 分布性改善:與單純sum(c)%m相比，乘質數加偏移量更能降低碰撞率
- 穩定性:對於相似字串(如"abc"與"abd")，雜湊值會有明顯差異，這有助於快速區分

## Experimental Setup
- Table sizes tested (m): 10, 11, 37
- Test dataset:
  - Integers: 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60
  - Strings: "cat", "dog", "bat", "cow", "ant", "owl", "bee", "hen", "pig", "fox"
- Compiler: GCC and G++
- Standard: C23 and C++23

## Results
| Table Size (m) | Index Sequence         | Observation              |
|----------------|------------------------|--------------------------|
| 10             | 1, 2, 3, 4, ...        | Pattern repeats every 10 |
| 11             | 10, 0, 1, 2, ...       | More uniform             |
| 37             | 20, 21, 22, 23, ...    | Near-uniform             |

## Compilation, Build, Execution, and Output

### Compilation
- The project uses a comprehensive Makefile that builds both C and C++ versions with proper flags:
  ```bash
  # Build both C and C++ versions
  make all
  
  # Build only C version
  make c
  
  # Build only C++ version
  make cxx
  ```

### Manual Compilation (if needed)
- Command for C:
  ```bash
  gcc -std=c23 -Wall -Wextra -Wpedantic -g -o C/hash_function C/main.c C/hash_fn.c
  ```
- Command for C++:
  ```bash
  g++ -std=c++23 -Wall -Wextra -Wpedantic -g -o CXX/hash_function_cpp CXX/main.cpp CXX/hash_fn.cpp
  ```

### Clean Build Files
- Remove all compiled files:
  ```bash
  make clean
  ```

### Execution
- Run the compiled binary:
  ```bash
  ./hash_function
  ```
  or
  ```bash
  ./hash_function_cpp
  ```

### Result Snapshot
- Output for integers:
  
  === Hash Function Observation (C Version) ===
![Image](https://github.com/user-attachments/assets/a64795c2-76bc-4a5f-9934-0fda426b28fe)
![Image](https://github.com/user-attachments/assets/f2ebf820-fbd1-4bbc-be2f-856fdf1e6ca2)
![Image](https://github.com/user-attachments/assets/8709c99e-9910-4d13-99c4-0b01fdd3b5ba)

  === Hash Function Observation (C++ Version) ===
![Image](https://github.com/user-attachments/assets/8a02b956-cc5d-40a2-9201-65834dd78e81)
![Image](https://github.com/user-attachments/assets/f2ebf820-fbd1-4bbc-be2f-856fdf1e6ca2)
![Image](https://github.com/user-attachments/assets/8709c99e-9910-4d13-99c4-0b01fdd3b5ba)



- Output for strings:
  
![Image](https://github.com/user-attachments/assets/d405a495-4094-4839-8376-7bd944b1aacd)

![Image](https://github.com/user-attachments/assets/0e6abc16-8cfd-4fd9-89d5-a4d556ba04a5)

![Image](https://github.com/user-attachments/assets/dc9e3d18-f8cc-4397-a129-fa422cf26e72)

  

- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.
- Example output for integers:
  ```
  Hash table (m=10): [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
  Hash table (m=11): [10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  Hash table (m=37): [20, 21, 22, 23, 24, 25, 26, 27, 28, 29, ...]
  ```
- Example output for strings:
  ```
  Hash table (m=10): ["cat", "dog", "bat", "cow", "ant", ...]
  Hash table (m=11): ["fox", "cat", "dog", "bat", "cow", ...]
  Hash table (m=37): ["bee", "hen", "pig", "fox", "cat", ...]
  ```
- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.

## Analysis
- Prime vs non-prime `m`: Prime table sizes generally result in better distribution and fewer collisions.
- Patterns or collisions: Non-prime table sizes tend to produce repetitive patterns, leading to more collisions.
- Improvements: Use a prime table size and a well-designed hash function to enhance distribution.
- 最佳策略：選質數作為 table size，並搭配「質數乘數 + 偏移量 + XOR/位移」的 hash function，能真正降低碰撞率。
- Load Factor保持在0.7以下，必要時rehash

## Reflection
1. Designing hash functions requires balancing simplicity and effectiveness to minimize collisions.
2. Table size significantly impacts the uniformity of the hash distribution, with prime sizes performing better.
3. The design using a prime table size and a linear transformation formula produced the most uniform index sequence.
