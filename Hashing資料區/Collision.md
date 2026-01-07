#  Collision (碰撞) 筆記

## 1. 定義
- 在 **Hash Table** 中，Collision 指的是：  
  當兩個或以上不同的 **Key** 經由 **hash function** 映射到相同的 **index (bucket)** 時，就發生碰撞。  

 簡單來說：  
**Collision = 不同的 keys → 相同的 hash address**

---

## 2. Hash Table 碰撞處理 (Strategies)
1. **Chaining**  
   - 每個 bucket 儲存一個 linked list  
   - 碰撞的項目串在一起  

2. **Open Addressing**  
   - 碰撞時尋找下一個空位  

---

## 3.  Key Points
1. **Collision Source**：多個不同的 key 產生相同的 hash 值 (index)  
2. **Unavoidable**：除非 hash 空間 ≥ 唯一 key 數量 (實務上極少見)，否則碰撞無法完全避免  
3. **Goal**：最小化碰撞頻率，並有效處理碰撞以維持查詢效率  
