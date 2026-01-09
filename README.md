#  11401_CS203A 資料結構 (Data Structures)

> **曾偉翔 · WEIXIANG ZENG**
>
> **元智大學 (YZU) / 資訊工程學系**
>
> **學號：1133320**
>
> 這裡是我的課程repo，存放所有作業實作、練習與相關文件。

---

### 🛠 技術棧與環境
* **程式語言：** `C / C++` (專注於指標操作與記憶體效率)
* **版本管理：** `Git` / `GitHub`
* **學習目標：** 深入理解抽象資料型別 (ADT) 與演算法優化

---

### 📂 章節 (Index)

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

### ⚡ 複雜度速查 (Complexity Cheat Sheet)

這是我在實作與分析過程中整理的效能速查表：

| 資料結構       | 插入 | 刪除 | 搜尋 | 訪問 | 備註 |
|----------------|------|------|------|------|------|
| Array          | O(n) | O(n) | O(n) | O(1) | 固定大小，需移動元素 |
| Linked List    | O(1) | O(1) | O(n) | O(n) | 動態配置，指標操作 |
| Stack          | O(1) | O(1) | -    | O(1) | LIFO 結構 |
| Queue          | O(1) | O(1) | -    | O(1) | FIFO 結構 |
| Binary Tree    | O(log n) | O(log n) | O(log n) | O(n) | 平衡性影響效率 |
| Hash Table     | O(1) | O(1) | O(1) | -    | 須處理碰撞 |
| Graph (DFS/BFS)| O(V+E) | O(V+E) | O(V+E) | -    | V: 節點數, E: 邊數 |



---

### 👤 學習者資訊

* **姓名**：曾偉翔 (WEIXIANG ZENG)
* **學號**：1133320
* **系所**：元智大學 資訊工程學系
* **聯繫**：[s1133320@mail.yzu.edu.tw](mailto:s1133320@mail.yzu.edu.tw)
* **狀態**：2026 資料結構學習進行中 
