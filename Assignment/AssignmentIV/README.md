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
myHashInt():
| Table Size (m) | Index Sequence         | Observation              |
|----------------|------------------------|--------------------------|
| 10             | 4, 4, 6, 0, 2, 4, 2, 2, 8, 6, 0, 0, 0, 4, 6, 2, 8, 6, 4, 8      | 多key對應到同個index，空間利用率低 |
| 11             | 10, 9, 2, 0, 1, 4, 2, 5, 1, 7, 10, 8, 10, 7, 0, 4, 5, 10, 8, 9      |所有位置都有被使用，空間利用率比m=10好，但分布不均，例如:Index 10 出現 4 次，佔比過高   |
| 37             | 0, 12, 31, 22, 8, 36, 34, 4, 36, 28, 1, 20, 36, 1, 20, 5, 29, 30, 28, 25   |碰撞率下降，雖然仍有群聚，但比之前集中在少數 index 的情況好很多         |

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
  Hash table (m=10): [4, 4, 6, 0, 2, 4, 2, 2, 8, 6, 0, 0, 0, 4, 6, 2, 8, 6, 4, 8]
  Hash table (m=11): [10, 9, 2, 0, 1, 4, 2, 5, 1, 7, 10, 8, 10, 7, 0, 4, 5, 10, 8, 9]
  Hash table (m=37): [0, 12, 31, 22, 8, 36, 34, 4, 36, 28, 1, 20, 36, 1, 20, 5, 29, 30, 28, 25]
  ```
- Example output for strings:
  ```
  Hash table (m=10): [3, 5, 2, 0, 4, 9, 1, 6, 1, 4]
  Hash table (m=11): [10, 6, 1, 9, 10, 2, 1, 4, 5, 1]
  Hash table (m=37): [29, 17, 35, 1, 0, 21, 27, 11, 18, 14]
  ```
- Observations: Outputs align with the analysis, showing better distribution with prime table sizes.

## Analysis
- Prime vs non-prime `m`: Prime table sizes generally result in better distribution and fewer collisions.
- Patterns or collisions: Non-prime table sizes tend to produce repetitive patterns, leading to more collisions.
- Improvements: Use a prime table size and a well-designed hash function to enhance distribution.
- 最佳策略：選質數作為 table size，並搭配「質數乘數 + 偏移量 + XOR/位移」的 hash function，能真正降低碰撞率。
- 多重hash function: 使用double hashing 或多種hash function結合，能在probing時打破規律性，減少群聚效應
- Collision Resolution: 即時hash function 已經優化，碰撞仍然不可避免。透過chaining或open addressing 來維持查詢效率
- Rehash的必要性:當Load Factor超過一定值，見建立一個更大的table，並重新計算所有元素的hash值

## Reflection
1. Designing hash functions requires balancing simplicity and effectiveness to minimize collisions.
2. Table size significantly impacts the uniformity of the hash distribution, with prime sizes performing better.(m=101比m=100更能分散key)
3. The design using a prime table size and a linear transformation formula produced the most uniform index sequence.
4. 在公式參數選擇中，要確保a和m互質，互質能保證輸入序列映射到完整範圍，例如a=93，m=101互質，能產生均勻分布
5. 設計hash function避免簡單的模式化設計，像是只用ASCII值相加("abc" 與 "cab" 的字元和相同，這些設計容易讓相似 key 映射到相同位置)，盡量加入位移或乘數，打破規律
6. 讓key的不同部分影響hash值:設計hash function時，應確保key的每個元素或位元都能參與計算，例如:Polynomial rolling hash，避免只依賴某一部分造成分布不均
