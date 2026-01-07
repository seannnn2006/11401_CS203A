# HEAPS資料區 

本資料夾收錄 CS203A 課程中與 Heap（堆積） 相關的學習筆記。Heap 是一種特殊的完全二元樹（Complete Binary Tree），廣泛應用於優先佇列（Priority Queue）與排序演算法中。

##  檔案一覽

| 檔案名稱                     | 說明                                   |
|------------------------------|----------------------------------------|
|[`Heap定義`](Heap定義)        | Heap 的結構特性、完全二元樹條件與 Max/Min Heap 定義             |
|  [`Why Order Means Priority in a Heap`](Why%20Order%20Means%20Priority%20in%20a%20Heap)                    | 探討 Heap 的順序性如何轉換為優先權管理（Priority）        |
|  [`將插入及刪除應用在Max Heap`](將插入及刪除應用在Max%20Heap)| Max Heap 的插入（Heapify Up）與刪除（Heapify Down）步驟分解          |
| [`Operations and Time Complexity`](Operations%20and%20Time%20Complexity)  | 各項操作（Insert, Extract, Build Heap）的時間複雜度分析 |

##  學習目標

- 理解 Heap 的兩個核心性質：結構性質（完全二元樹）與 堆積性質（Order Property）。
- 掌握 Max Heap（根節點最大）與 Min Heap（根節點最小）的差異。
- 熟悉如何使用 陣列 (Array) 來實作 Heap，並透過索引計算父子節點關係。
- 熟練 Heapify 過程：包括向上調整（Shift Up）與向下調整（Shift Down）。
- 掌握 Heap 在 優先佇列 (Priority Queue) 與 Heap Sort 中的應用。

##  Big O 快速查詢
Heap 的操作效率主要取決於樹的高度O(logn)：
### Heap 操作效率

| 操作類型     | 時間複雜度 | 備註   | 
|--------------|------------|------------|
| Insert (插入) | O(logn)     | 新增至末端後向上調整 (Heapify Up)     | 
|Delete/Extract (刪除)| O(logn)  | 移除根節點後向下調整 (Heapify Down)      |
|Peek (查看最值） | O(1)       |直接讀取根節點     | 
|Build Heap (建立) | O(n)       | 使用 Bottom-up 方式建立 Heap 的優化效率       | 

> 註： 由於 Heap 是完全二元樹，其高度永遠維持在 $\log n$，因此能保證極其穩定的操作效能。
