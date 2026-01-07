#  Hash Table (雜湊表) 筆記

## 1. 定義
- Hash Table 是一種 **鍵值對 (key-value pair)** 儲存資料的資料結構  
- 能夠提供快速 **插入、刪除、查詢** 操作  

---

## 2. 底層結構
1. **Array**：用於儲存 bucket，及雜湊後的索引位置  
2. **Linked List**：用於處理碰撞 (collision)，每個 bucket 儲存一個鏈結串列  

 **Hybrid 結構**：Hash Table = Array + Linked List  

---

## 3. 雜湊與碰撞處理
- **Hash Function**：將 key (鍵) 轉換為索引陣列 (bucket index)  
- **碰撞處理方式**：  
  1. 使用 Linked List 儲存具有相同雜湊值的多筆資料  
  2. 每個 bucket 對應一個鏈結串列，儲存所有雜湊到該位置的項目  

---

## 4. 特性
1. Hash Table 結合 **陣列的快速存取** 與 **鏈結串列的彈性儲存**  
2. 雜湊函數的設計與碰撞處理策略是影響效能的關鍵  
3. 常見應用：字典、快取系統、資料庫索引  

---

## 5. 名詞定義
- **key**：唯一識別資料的標籤 (例如名字、ID、編號)  
- **value**：與 key 對應的資料內容 (例如分數、設定值)  
- **hash**：將 key 轉換為整數索引的函數運算結果  
- **bucket**：儲存資料的陣列位置，由 hash 決定  

---

#  Approach to Managing Hash Table

## 1. Static Hashing
- **定義**：Hash Table 的大小在建立時就固定，無法自動擴充或縮小  
- **特性**：  
  1. `m` (bucket 數量) 在 `Create()` 時決定  
  2. hash function 固定不變  
  3. 若資料量超過預期，碰撞率會上升，效能下降  
- **適用場景**：  
  1. 資料量穩定、預估準確  
  2. 嵌入式系統、記憶體受限環境  

---

## 2. Dynamic Hashing
- **定義**：Hash Table 可根據資料量自動擴充或縮小  
- **特性**：  
  1. 當 load factor (λ) 超過門檻 (如 0.75)，觸發 resize  
  2. hash function 或 table 結構可重新調整 (如 rehash)  
  3. 維持平均 O(1) 操作效率  
  4. Rehashing：擴充表格後，重新計算所有 key 的 index  
- **適用場景**：  
  1. 資料量變動大 (如快取系統、資料庫索引)  
  2. 需要高效能與穩定查詢速度  
