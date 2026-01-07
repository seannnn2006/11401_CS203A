# TREE資料區 

本資料夾收錄 CS203A 課程中與 Tree（樹狀結構） 相關的學習筆記與程式範例，涵蓋基本定義、走訪演算法、各類二元樹及其應用。

##  檔案說明

| 檔案名稱 | 說明 |
|----------|------|
| [`Tree定義`](Tree%20定義.md) | 樹的基本術語與性質 |
| [`Tree Traversal`](Tree%20Traversal) | 走訪演算法：前序（Pre-order）、中序（In-order）、後序（Post-order）與層序（Level-order） |
| [`二元樹的類型比較`](二元樹的類型比較) | 比較 Full, Complete, Perfect, Skewed Binary Tree 等類型 |
| [`常見樹結構及特點`](常見樹結構及特點) | 介紹 Binary Search Tree (BST) 等基礎樹狀結構 |
| [`平衡樹 (Balanced Tree)`](平衡樹%20(Balanced%20Tree)) | 探討 AVL Tree, Red-Black Tree 等平衡機制與旋轉操作 |
| [`進階樹的結構及特點`](進階樹的結構及特點) | 延伸學習如 B-Tree, Tries 或其他進階應用結構 | 

##  學習目標

- 理解樹狀結構的遞迴定義與階層式資料表達方式
- 掌握 Binary Tree（二元樹） 的特性及其在記憶體中的表示法
- 熟練各種 Tree Traversal（走訪） 演算法的實作與應用情境
- 掌握 Binary Search Tree (BST) 的操作（搜尋、插入、刪除）及其效能瓶頸
- 理解 Balanced Tree（平衡樹） 如何透過旋轉維持 $O(\log n)$ 的搜尋效率
- 熟悉樹狀結構在實際開發中（如檔案系統、資料庫索引）的應用

##  Big O 分析
樹狀結構的效能通常與樹的高度（Height）密切相關：
| 操作類型       | 操作 | 平均時間複雜度 | 最壞情況 (Worst Case)         |
|----------------|------------|------------|--------------------------|
| 一般二元樹      |Traversal     | O(n)      | O(n)      |
| BST (二元搜尋樹)       |Search / Insert       | O(logn)       | O(n)(當樹退化成線性時)     |
| 平衡樹 (如 AVL)       | Search / Insert   | O(logn)       | O(logn)             |

>註：為了確保在最壞情況下仍具備高效能，實務上常使用平衡樹結構，將搜尋時間穩定控制在對數等級。

