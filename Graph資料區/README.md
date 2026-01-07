# GRAPH資料區 

本資料夾存放關於 Graph（圖形） 的課堂筆記，涵蓋圖形的表示法、類型比較及走訪演算法。

##  檔案一覽

| 檔案名稱                     | 說明                                   |
|------------------------------|----------------------------------------|
| [`Graph定義`](Graph定義)| 圖的基本構成：頂點（Vertex）與邊（Edge）            |
| [`Graph Types`](Graph%20Types)                    | 有向圖、無向圖、加權圖與連通圖等類型分類            |
|[`圖的表示法比較`](圖的表示法比較)   | 比較 Adjacency Matrix 與 Adjacency List 的差異            |
| [`Pros & Cons Study: Adjacency Matrix`](Pros%20&%20Cons%20Study:%20Adjacency%20Matrix)| 相鄰矩陣的優缺點與適用場景分析 |
|[`Pros & Cons Study: Adjacency List`](Pros%20&%20Cons%20Study:%20Adjacency%20List)     | 相鄰串列的優缺點與記憶體效率分析       |
| [`遍歷方式比較`](遍歷方式比較)     |廣度優先搜尋 (BFS) 與深度優先搜尋 (DFS) 的比較                |

##  學習目標

- 理解圖形資料結構在表達複雜關聯（如社交網路、地圖）時的優勢。
- 根據資料疏密度（Dense vs. Sparse）選擇正確的表示法。
- 掌握 BFS（佇列實作）與 DFS（遞迴/堆疊實作）的邏輯。
- 理解圖形演算法在路徑搜尋的應用。

##  Big O 快速查詢

### Graph 操作效率

| 表示法     | 空間複雜度 | 查詢相鄰節點 | 備註                   |
|--------------|------------|------------|------------------------|
| Adjacency Matrix | O(V*V)       | O(1)       | 適合稠密圖 (Dense Graph)           |
| Adjacency List  | O(V+E)       | O(Degree(V))       |    適合稀疏圖 (Sparse Graph)    |
