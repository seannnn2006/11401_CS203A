#  Probing (探查) 筆記

## 1. 定義
- **Probing** 是一種碰撞處理技術，專用於 **Open Addressing 型 Hash Table**。  
- 當多個 key 經由 hash function 映射到相同的 index (發生碰撞) 時，Probing 定義演算法如何系統性搜尋下一個可用的空位。  

 **簡化定義**：  
Probing = 發生碰撞後，系統性地搜尋下一個空位的過程  

---

## 2. Probing 的用途
1. 解決 Open Addressing 中的碰撞問題  
2. 維持 Hash Table 的空間效率 (不使用額外結構 linked list)  
3. 提升查詢與插入的效能  

---

## 3.  Probing 方法比較

### 1. Linear Probing
- **Formula**：`(h(k) + i) mod m`  
- **Behavior**：每次碰撞後，往下一格嘗試插入，形成線性序列  
- **Pros/Cons**：簡單 / 容易產生 Primary Clustering (群聚效應)  

---

### 2. Quadratic Probing
- **Formula**：`(h(k) + c₁·i + c₂·i²) mod m`  
- **Behavior**：間距呈現二次增長，須注意表格大小與常數選擇  
- **Pros/Cons**：減少群聚效應 / 可能跳過某些 slot，無法查到所有 slot  

---

### 3. Double Hashing
- **Formula**：`(h₁(k) + i·h₂(k)) mod m`  
- **Behavior**：使用兩個 hash function：  
  - `h₁(k)` 決定初始位置  
  - `h₂(k)` 決定探查步長  
  探查序列依 key 而異，分布更均勻  
- **Pros/Cons**：分布均勻 / 計算複雜  

---

## 4.  Hash Table Probing 的關鍵特性
1. **Deterministic (確定性)**：同一個 key 每次都會產生相同的探查序列，確保行為可預測  
2. **Bounded (有界性)**：最多只會探查 m 個 slot (m 為表格大小)，避免無限迴圈或超出範圍  
3. **Cluster Formation (群聚形成)**：某些方法（如 Linear Probing）容易形成連續填滿區域，導致查詢與插入效率下降  
4. **Load Factor Sensitivity (載入因子敏感性)**：當載入因子 α = n/m 增加時，探查長度與時間複雜度會急遽上升  
