#  11401_CS203A 資料結構 (Data Structures)

> 這裡是我的課程repo，存放所有**作業實作、練習與相關文件**。
> 專案主要用於 **11401_CS203A Data Structures** 課程的學習與紀錄，涵蓋從基礎到進階的各種專業知識。

-----
### 宗旨

此 repo 不僅是作業提交的空間，也作為 **個人知識庫**，方便日後複習與分享。  
希望透過系統化的整理，能夠在學習過程中建立清晰的脈絡，並且在未來進行更複雜的演算法設計時，能快速回顧基礎概念。

---

###  學習者資訊

* **姓名**：曾偉翔 (WEIXIANG ZENG)
* **學號**：1133320
* **系所**：元智大學 資訊工程學系
* **聯繫**：[s1133320@mail.yzu.edu.tw](mailto:s1133320@mail.yzu.edu.tw)
* **狀態**：2026 資料結構學習進行中

---
### 內容概覽

- **課堂作業 (Assignments)**  
  依照課程進度完成的程式設計題目、學習單，強化理解與應用。

- **程式碼實作 (Code)**  
  專注於 `C / C++` 語言，並著重於指標操作與記憶體管理。

- **練習與測驗 (Quiz)**  
  整理學校的小考考卷，幫助期中、期末複習。

- **章節筆記 (Modules)**  
  依照不同資料結構分類的學習重點與範例，包括：
  - Introduction
  - Array
  - Linked List
  - Stack / Queue
  - Tree / Heap
  - Hashing
  - Graph

- **複雜度速查表 (Complexity Cheat Sheet)**  
  快速查詢各種資料結構的時間複雜度，方便在設計與分析演算法時參考。

- **應用 (Applications)**  
  整理各種資料結構在程式設計與演算法中的常見應用場景，幫助理解其實際用途。




---

###  技術棧與環境
* **程式語言：** `C / C++` (專注於指標操作與記憶體效率)
* **版本管理：** `Git` / `GitHub`
* **學習目標：** 深入理解抽象資料型別 (ADT) 與演算法優化

---

###  章節 (Index)

我將課程內容依據特性分類，點擊連結可直接跳轉至各實作區：

| 模組分類 | 學習重點 | 目錄連結 |
| :--- | :--- | :--- |
| **線性結構** | 基礎內存排列、搜尋與排序 | [Array 資料區](https://github.com/seannnn2006/11401_CS203A/tree/main/Array%E8%B3%87%E6%96%99%E5%8D%80) |
| **鏈結結構** | 動態配置與指標節點操作 | [Linked List 資料區](https://github.com/seannnn2006/11401_CS203A/tree/main/Link%20List%E8%B3%87%E6%96%99%E5%8D%80) |
| **限制操作** | LIFO 與 FIFO 經典應用 | [Stacks & Queues](https://github.com/seannnn2006/11401_CS203A/tree/main/STACKS%20%26%20QUEUES%E8%B3%87%E6%96%99%E5%8D%80) |
| **層次架構** | 二元樹、AVL 樹與優先佇列 | [Tree](https://github.com/seannnn2006/11401_CS203A/tree/main/Tree%E8%B3%87%E6%96%99%E5%8D%80) / [Heaps](https://github.com/seannnn2006/11401_CS203A/tree/main/Heaps%E8%B3%87%E6%96%99%E5%8D%80) |
| **快速索引** | 雜湊函數設計與衝突處理 | [Hashing 區](https://github.com/seannnn2006/11401_CS203A/tree/main/Hashing%E8%B3%87%E6%96%99%E5%8D%80) |
| **網路連結** | 遍歷算法與最短路徑規劃 | [Graph 資料區](https://github.com/seannnn2006/11401_CS203A/tree/main/Graph%E8%B3%87%E6%96%99%E5%8D%80) |
| **測驗練習** | 單元小測驗 | [Quiz 區](https://github.com/seannnn2006/11401_CS203A/tree/main/Quiz%E5%8D%80) |
| **作業提交** | 課堂作業 | [Assignment 區](https://github.com/seannnn2006/11401_CS203A/tree/main/Assignment) |
| **課程導覽** | 課程架構 | [Introduce](https://github.com/seannnn2006/11401_CS203A/tree/main/Introduction) |
| **程式實作** | C 語言記憶體實作 | [Code 區](https://github.com/seannnn2006/11401_CS203A/tree/main/Code) |



---

###  複雜度速查 (Complexity Cheat Sheet)

這是我在實作與分析過程中整理的效能速查表：

| 資料結構       | 插入 | 刪除 | 搜尋 | 訪問 | 備註 |
|----------------|------|------|------|------|------|
| Array          | O(n) | O(n) | O(n) | O(1) | 固定大小，需移動元素 |
| Linked List    | O(1) | O(1) | O(n) | O(n) | 動態配置，指標操作 |
| Stack          | O(1) | O(1) | -    | O(1) | LIFO 結構 |
| Queue          | O(1) | O(1) | -    | O(1) | FIFO 結構 |
| Binary Tree    | O(log n) | O(log n) | O(log n) | O(n) | 平衡性影響效率 |
| Heap           | O(log n)   | O(log n)   | O(n)       | O(1) | 常用於優先佇列 (Priority Queue) |
| Hash Table     | O(1) | O(1) | O(1) | -    | 須處理碰撞 |
| Graph (DFS/BFS)| O(V+E) | O(V+E) | O(V+E) | -    | V: 節點數, E: 邊數 |

---

###  應用 (Applications)

以下是各資料結構在程式設計與演算法中的常見應用場景：

- **Array**  
  - 適合固定大小的資料儲存  
  - 常用於排序演算法 (如 Bubble Sort, Quick Sort)  

- **Linked List**  
  - 動態記憶體管理  
  - 適合需要頻繁插入/刪除的場景 (如音樂播放清單)  

- **Stack**  
  - 函式呼叫堆疊 (Call Stack)  
  - 括號匹配、字串反轉  

- **Queue**  
  - 工作排程 (Task Scheduling)  
  - BFS 演算法、資源共享 (Printer Queue)  

- **Tree**  
  - 層次化資料儲存 (檔案系統)  
  - 搜尋與排序 (Binary Search Tree, AVL Tree 等)

- **Binary Tree**  
  - 層次化資料儲存 (檔案系統)  
  - 搜尋與排序 (Binary Search Tree)  

- **Heap**  
  - 優先佇列 (Priority Queue)  
  - 演算法應用：Dijkstra 最短路徑、Heap Sort  

- **Hash Table**  
  - 快速查詢 (Dictionary, Symbol Table)  
  - 資料庫索引、快取系統 (Cache)  

- **Graph**  
  - 網路連結分析 (Social Network, Web Graph)  
  - 最短路徑規劃 (Dijkstra, Floyd-Warshall)  
  - 拓撲排序 (Topological Sort)  

-----

