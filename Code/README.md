# C 語言記憶體實作筆記

本小節整理了關於使用 C 語言進行基礎資料結構實作時，關於 陣列（Array） 與 鏈結串列（Linked List） 的記憶體管理範例。

##  程式檔案

| 檔案名稱       | 說明                     |
|----------------|--------------------------|
| `array_demo_incomplete.c`        | 陣列基本操作的練習範例     | 
| `array_dynamic_memory.c` | 使用 malloc / free 進行動態陣列記憶體管理      |
| `linked_list_memory.c` | 指標 (Pointer) 與節點記憶體分配的實作演練     | 

##  關鍵概念

- Static vs. Dynamic Allocation: 區分編譯期與執行期記憶體分配的差異。
- Pointer Management: 在實作 Linked List 時確保指標正確指向，避免 Memory Leak。
- Contiguous Memory: 理解陣列在記憶體中連續存放的特性與其對效能（Cache Locality）的影響。

