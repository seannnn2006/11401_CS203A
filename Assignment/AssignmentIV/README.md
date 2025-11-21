# Homework Assignment IV: Hash Function Design & Observation (C/C++ Version)

This assignment focuses on the design and observation of hash functions using C/C++. 
Students are expected to implement and analyze the behavior of hash functions, 
evaluate their efficiency, and understand their applications in computer science.

Developer: [曾偉翔]  
Email: [kkevin9563@gmail.com]  
開發環境: [Window] 

## My Hash Function
### Integer Keys 
- Formula / pseudocode:
  ```
  int myHashInt(int key, int m) {
    if (m <= 0) return -1;

    int hash = key * 97 + 103;
    int index = hash % m;
    if (index < 0) index += m;

    return index;}
  ```
- Rationale: [Explain your design choices and how they minimize collisions.]
- 採用線性結構:此形式計算量小、速度快，在一般輸入下提供良好的分布
- 使用93與103作為乘數與偏移:質數是Hash function中常用來增加均勻性的技巧
- 支援負數 key:可以修正負餘數，確保hash index合法

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
- 線性組合方式(先取其ASCII值，再乘上常數a，加上偏移量b):避免字元值相加過於集中
- 透過逐字元處理，將字串轉換成一個整數雜湊值，方便映射至hash table
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
  ```
  === Hash Function Observation (C Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      0
  22      7
  23      4
  24      1
  25      8
  26      5
  27      2
  28      9
  29      6
  30      3
  51      0
  52      7
  53      4
  54      1
  55      8
  56      5
  57      2
  58      9
  59      6
  60      3 
  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      6
  22      4
  23      2
  24      0
  25      9
  26      7
  27      5
  28      3
  29      1
  30      10
  51      1
  52      10
  53      8
  54      6
  55      4
  56      2
  57      0
  58      9
  59      7
  60      5
  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      31
  22      17
  23      3
  24      26
  25      12
  26      35
  27      21
  28      7
  29      30
  30      16
  51      18
  52      4
  53      27
  54      13
  55      36
  56      22
  57      8
  58      31
  59      17
  60      3
  === Hash Function Observation (C++ Version) ===

  === Table Size m = 10 ===
  Key     Index
  -----------------
  21      0
  22      7
  23      4
  24      1
  25      8
  26      5
  27      2
  28      9
  29      6
  30      3
  51      0
  52      7
  53      4
  54      1
  55      8
  56      5
  57      2
  58      9
  59      6
  60      3 

  === Table Size m = 11 ===
  Key     Index
  -----------------
  21      6
  22      4
  23      2
  24      0
  25      9
  26      7
  27      5
  28      3
  29      1
  30      10
  51      1
  52      10
  53      8
  54      6
  55      4
  56      2
  57      0
  58      9
  59      7
  60      5

  === Table Size m = 37 ===
  Key     Index
  -----------------
  21      31
  22      17
  23      3
  24      26
  25      12
  26      35
  27      21
  28      7
  29      30
  30      16
  51      18
  52      4
  53      27
  54      13
  55      36
  56      22
  57      8
  58      31
  59      17
  60      3
  ```

- Output for strings:
  ```
  === String Hash (m = 10) ===
  Key     Index
  -----------------
  cat     3
  dog     5
  bat     2
  cow     0
  ant     4
  owl     9
  bee     1
  hen     6
  pig     1
  fox     4

  === String Hash (m = 11) ===
  Key     Index
  -----------------
  cat     10
  dog     6
  bat     1
  cow     9
  ant     10
  owl     2
  bee     1
  hen     4
  pig     5
  fox     1

  === String Hash (m = 37) ===
  Key     Index
  -----------------
  cat     29
  dog     17
  bat     35
  cow     1
  ant     0
  owl     21
  bee     27
  hen     11
  pig     18
  fox     14
  ```

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

## Reflection
1. Designing hash functions requires balancing simplicity and effectiveness to minimize collisions.
2. Table size significantly impacts the uniformity of the hash distribution, with prime sizes performing better.
3. The design using a prime table size and a linear transformation formula produced the most uniform index sequence.
