# HASHING 資料區 

本資料夾收錄 CS203A 課程中與 Hashing（雜湊） 相關的學習筆記與程式實作，涵蓋雜湊函數設計、碰撞處理機制以及動態與靜態雜湊的效能分析。

##  檔案一覽

| 檔案名稱                     | 說明                                   |
|------------------------------|----------------------------------------|
| `Hashing`                      | 雜湊法的基本定義、核心原理與運作流程          |
| `Hash Table`                      | 雜湊表（Hash Table）的資料結構實作與應用             |
| `Hash Function`   | 雜湊函數的設計原則（如 Uniformity, Deterministic）            |
| `Hash Function方法` | 各類雜湊函數計算（Division, Multiplication, Mid-square 等） |
| `Collision`                   | 碰撞（Collision）問題的定義、溢位與發生原因分析       |
| `Probing`      | 線性探測（Linear）、平方探測（Quadratic）等解決方案               |
| `Dictionary`                 | 雜湊表在字典（Dictionary ADT）中的實作應用          |
| `Static vs Dynamic Hashing`                 | 靜態雜湊與動態雜湊的比較          |
| `詞彙定義`                      | 整理 Hashing 相關的重要專業術語（Terminology）                   |
| `詞彙定義`                      | 整理 Hashing 相關的重要專業術語（Terminology）                   |

## 🎯 學習目標

- 理解 Stack 與 Queue 的基本結構與操作邏輯
- 掌握先進先出（FIFO）與後進先出（LIFO）的應用情境
- 熟悉使用陣列與鏈結串列實作 Stack/Queue 的差異
- 強化資料結構選擇與效能分析的能力
- 掌握常見操作的時間與空間複雜度（Big O）

## ⏱ Big O 分析

### Stack 操作效率

| 操作類型     | 時間複雜度 | 空間複雜度 | 備註                   |
|--------------|------------|------------|------------------------|
| push（加入） | O(1)       | O(1)       | 加入至頂端             |
| pop（移除）  | O(1)       | O(1)       | 移除頂端元素           |
| peek（查看） | O(1)       | O(1)       | 查看頂端但不移除       |

### Queue 操作效率

| 操作類型     | 時間複雜度 | 空間複雜度 | 備註                   |
|--------------|------------|------------|------------------------|
| enqueue（加入） | O(1)    | O(1)       | 加入至尾端             |
| dequeue（移除） | O(1) 或 O(n) | O(1)   | 若無 tail 指標則需遍歷 |
| peek（查看） | O(1)       | O(1)       | 查看前端但不移除       |

> 📌 註：若使用陣列實作，Queue 的 dequeue 操作可能需移動元素，導致 O(n) 時間複雜度；使用 Linked List 可達 O(1)。

## 🚀 使用方式

```bash
git clone https://github.com/seannnn2006/11401_CS203A.git
cd 11401_CS203A/STACKS & QUEUES資料區
