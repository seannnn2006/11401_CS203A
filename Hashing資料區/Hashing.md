#  Hashing 與 Hash Table 筆記

## 1. 定義
- **Hashing**：一種技術，用來將 `key` 轉換成 `index`，以便快速儲存與查找資料  
- **目標**：快速根據 `key` 找到資料，避免逐筆搜尋  
- **映射流程**：`Key → Hash Function → Index → Value`  
- **Hash Function**：數學規則，將 `key` 轉換成記憶體中的位置 (通常是陣列索引)  

---

## 2. Hash Table 是什麼？
- 使用 Hashing 的資料結構  
- 儲存 **key-value pair**  
- 支援平均 **O(1)** 的操作效率  

---

## 3. 儲存方式
- 將 `key` 經由 **hash function** 映射到一個 **bucket (陣列位置)**  

---

## 4. 碰撞處理
1. **Chaining**：每個 bucket 是一個 linked list  
2. **Open Addressing**：碰撞時尋找下一個空位  

---

## 5. 操作效率
- 插入、刪除、查詢 → 平均 **O(1)**  
- 最壞情況 (大量碰撞) → 可能退化為 **O(n)**  

---

## 6. 為什麼要選擇適當的 Table Size？
Hash Table 的核心：  
`key → hash function → index (mod m)`  
其中 `m` 是表格大小 (bucket 數量)，選得好可以減少碰撞、提升效率  

###  建議
1. **選擇質數**  
   - 避免重複模式：質數能讓 hash function 的結果分布更均勻  
   - 常見質數範例：1009、10007、104729 (越大越能容納更多資料)  

2. **特例：大型表格 (如 2^32)**  
   - 前提：hash function 必須混合 bits 的夠好 (位元運算、乘法、位移)  
   - 否則容易出現碰撞，尤其在低階 bits 不均勻時  
