定義: 樹是一種非線性的階層式資料結構，由節點與邊組成
每個節點可以有零個或多個子節點，形成 父子關係（parent-child relationship）
沒有循環（no cycles），因此樹是一個無環的結構
常用於表示階層式關係，例如：
1. 檔案系統（目錄與檔案）
2. 組織架構（公司部門與員工）

Terminology:
1. Root 是整棵樹的起點。
2. Parent / Child 描述了階層關係
3. Leaf 節點代表結束點
4. Sibling 節點是同一父節點下的「兄弟」
5. Edge 是連線，讓樹形成結構
6. Depth / Height 用來衡量位置與大小(Depth = distance from root; Height = longest path to leaf)
7. Fan-out (Degree) 決定了樹的分支程度，例如二元樹的最大 fan-out 為 2
