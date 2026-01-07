#  堆疊樹 (Heap Tree) 筆記

## 1. 定義
堆疊樹是一種 **完全二元樹 (Complete Binary Tree)**，並且滿足 **堆疊順序性 (Heap-order property)**。  
常見的兩種堆：

- **最大堆 (Max-Heap)**  
  每個父節點的值 ≥ 子節點的值，根節點是全域最大值  
  *(parent ≥ children)*

- **最小堆 (Min-Heap)**  
  每個父節點的值 ≤ 子節點的值，根節點是全域最小值  
  *(parent ≤ children)*

---

## 2. 形狀特性
Heap 必須是 **完全二元樹**：
1. 除了最後一層外，每一層都必須填滿  
2. 最後一層的節點必須由左至右依序填入  

> 此特性可保證 Heap 高效儲存在 **陣列 (array)** 中，不會有空洞。

---

## 3. 用途
Heap 常用於：
1. **優先佇列 (Priority Queues)**  
2. **堆疊序 (Heap Sort)**
