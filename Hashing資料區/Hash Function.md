# Hash Function 筆記

## 1. 定義
- 一種「映射函數」，將 **key** 轉換成整數 **index**，用來定位資料在 Hash Table 中的位置。  

---

## 2. 一個好的 Hash Function 應具備
1. **Deterministic (確定性)**：同一個 key 必須永遠產生相同的 hash 值  
2. **Uniform (均勻性)**：將 key 均勻分布到所有 index，避免集中在某些 bucket  
3. **Efficient (效率性)**：計算速度要快，不能成為效能瓶頸  

---

## 3. Approach（策略）
1. **Ideal Case / One-to-one mapping**  
   - 每個 Value₁ 對應唯一 key  
   - 查詢效率最高，無碰撞  

2. **Collision Case / Collision handling**  
   - 多個 Value₁ 映射到相同 key，需處理碰撞  

---

## 4.  Collision Handling

### 1. Chaining
- (1) 每個 bucket 儲存一個 list  
- (2) 所有碰撞的 `<Value₁, Value₂>` pair 都串在同一個 bucket 下  
- **優點**：簡單、動態擴充容易  
- **缺點**：查詢效率可能退化為 O(n)  
- **適用於**：資料量不大、實作簡單  

---

### 2. Open Addressing
- (1) 若碰撞，則探查下一個空位  
- (2) 方式：  
  - Linear probing：依序往後找  
  - Quadratic probing：間距平方成長  
  - Double hashing：用第二個 hash function 決定探查步距  
- **優點**：節省空間 (不須額外 list)  
- **缺點**：容易形成 clustering (群聚效應)  
- **適用於**：空間有限、需陣列儲存  

---

### 3. Composite Key (複合體)
- (1) 將多個屬性組合成一個 key，提高唯一性  
- (2) 例如：`Key = f(Value₁ + timestamp)` 或 `Key = f(Value₁, Value₂)`  
- **適用於**：key 重複率高  

---

### 4. Hash Refinement
- (1) 改進 hash function 的設計  
- (2) 使用更好的 bit-mixing 技術  
- (3) 模質數以避免週期性碰撞  
- **適用於**：高效能、需均勻分布  
