# HASHING 資料區 

本資料夾收錄 CS203A 課程中與 Hashing（雜湊） 相關的學習筆記與程式實作，涵蓋雜湊函數設計、碰撞處理機制以及動態與靜態雜湊的效能分析。

##  檔案一覽

| 檔案名稱                     | 說明                                   |
|------------------------------|----------------------------------------|
|[`Hashing`](Hashing)                     | 雜湊法的基本定義、核心原理與運作流程          |
| [`Hash Table`](Hash%20Table)                  | 雜湊表（Hash Table）的資料結構實作與應用             |
|[`Hash Function`](Hash%20Function)   | 雜湊函數的設計原則（如 Uniformity, Deterministic）            |
|  [`Hash Function方法`](Hash%20Function方法) | 各類雜湊函數計算（Division, Multiplication, Mid-square 等） |
| [`Collision`](Collision)                  | 碰撞（Collision）問題的定義、溢位與發生原因分析       |
| [`Probing`](Probing)    | 線性探測（Linear）、平方探測（Quadratic）等解決方案               |
| [`Dictionary`](Dictionary)               | 雜湊表在字典（Dictionary ADT）中的實作應用          |
|  [`Static vs Dynamic Hashing`](Static%20vs%20Dynamic%20Hashing)                 | 靜態雜湊與動態雜湊的比較          |
|[Efficient Searching by Reducing Search Space](Efficient_Searching.md)| 透過雜湊技術有效減少搜尋空間並提升效能                   |
|[`詞彙定義`](詞彙定義)                     | 整理 Hashing 相關的重要專業術語（Terminology）                   |

##  學習目標

- 理解雜湊（Hashing）的運作邏輯：如何將大範圍鍵值映射至有限的索引空間
- 掌握 Collision Resolution（碰撞解決） 的兩大體系:Open Addressing、Chaining
- 熟悉常見 Hash Function 的數學設計與實作，避免Clustering
- 比較 Static Hashing 與 Dynamic Hashing 在擴充性與空間利用率上的差異
- 掌握雜湊表在平均情況下的 $O(1)$ 高效搜尋效能

##  Big O 分析

### Hashing 操作效率
在設計良好的情況下（適當的雜湊函數與負載因子），Hash Table 的操作效率如下：
| 操作類型     | 平均時間複雜度 | 最壞情況 | 備註                   |
|--------------|------------|------------|------------------------|
| Search (搜尋) | O(1)       | O(n)       | 最壞情況發生在所有鍵值都碰撞至同一個槽位            |
| Insertion (插入)）  | O(1)       | O(n)       | 須考量負載因子 (Load Factor) 是否觸發 Rehashing           |
| Deletion (刪除)） | O(1)       | O(n)       | 在 Open Addressing 中刪除須標記為 Deleted       |
