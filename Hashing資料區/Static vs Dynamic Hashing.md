# Hashing 基本概念

Hashing 是一種常見的資料儲存與檢索技術，透過 **hash function** 將資料映射到表格中的位置。

---

##  Static Hashing vs Dynamic Hashing 比較

| 特性 | Static Hashing | Dynamic Hashing |
|------|----------------|-----------------|
| **Table size** | 固定 | 可動態擴充或縮小 |
| **Hash function** | 固定不變 | 隨表格大小調整 |
| **Memory Usage** | 可預測 | 可能動態擴張 |
| **Performance** | 載入因子高時效能下降 | 載入因子高依然保持效率 |
| **Rehashing** | 需重建整張表格 | 僅局部桶分裂 |
| **Implementation** | 實作簡單 | 實作較複雜 |
| **Best Use Case** | 小型、固定資料集 | 大型、持續成長資料集 |
