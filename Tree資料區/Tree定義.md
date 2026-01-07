# Tree (樹)

##  定義
- 樹是一種 **非線性的階層式資料結構**，由 **節點 (nodes)** 與 **邊 (edges)** 組成。  
- 每個節點可以有零個或多個子節點，形成 **父子關係 (parent-child relationship)**。  
- 沒有循環 (no cycles)，因此樹是一個 **無環結構**。  
- 常用於表示階層式關係，例如：
  1. 檔案系統（目錄與檔案）  
  2. 組織架構（公司部門與員工）  

---

##  Terminology (術語)

1. **Root**：整棵樹的起點。  
2. **Parent / Child**：描述階層關係。  
3. **Leaf**：沒有子節點的節點，代表結束點。  
4. **Sibling**：同一父節點下的「兄弟節點」。  
5. **Edge**：節點之間的連線，形成樹的結構。  
6. **Depth / Height**：衡量位置與大小。  
   - Depth = 從 root 到某節點的距離。  
   - Height = 從某節點到 leaf 的最長路徑。  
7. **Fan-out (Degree)**：節點的分支程度。  
   - 例如：二元樹 (Binary Tree) 的最大 fan-out = 2。  

---
##  快速整理
- **樹是無環的** → 與圖 (Graph) 最大的差異之一。  
- **Root → Parent → Child → Leaf** → 形成階層結構。  
- **Depth 與 Height** → 常用於分析演算法複雜度。  
- **Fan-out** → 決定樹的分支數量，影響儲存與搜尋效率。  
