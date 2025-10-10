
#include <stdio.h>
#include <stdlib.h>

int main(){
  int *array;
  int n= 10;

  array = malloc(n* sizeof(int)); // 在C中不建議強制轉型malloc的回傳值
  if(array==NULL){
    printf("Memory allocation failed\n");
    return 1; // 若失敗就結束程式（避免使用 NULL 指標）
  }

  printf("Initial memory address: %p\n", (void*)array); // 印出起始位址（記得用 %p 並將指標轉為 (void*)）
  printf("Initial memory end address :%p\n",(void*)(array+n-1));

  for(int i = 0; i < n; i++){
  array[i] = i + 1;
  }

  printf("\n===Initial array (before realloc) ===\n");
  for(int i = 0; i < n; i++){
  printf("Index %d" -> Value: %d, Address: %p\n",i,array[i],(void)&array[i]);
  }

  n=n*2;
  int *tmp = realloc(array,n *sizeof(int));
  if(tmp==NULL){
  printf("Reallocation failed\n");
    free(array);
    return 1;
  }
  array=tmp;

  printf("\nAfter realloc memory address: %p\n", (void*)array);
  printf("After realloc end address   : %p\n", (void*)(array + n - 1));

  for (int i = n/2; i < n; i++) {
        array[i] = i + 1;
  }

  printf("\n=== Resized array (after realloc) ===\n");
  for (int i = 0; i < n; i++) {
        printf("Index %d -> Value: %d, Address: %p\n", i, array[i], (void*)&array[i]);
    }

  free(array);
  return 0;
}


1.malloc 分配連續記憶體

malloc(n * sizeof(int)) 會分配一塊連續的記憶體，可以透過 array + i 或 &array[i] 來存取第 i 個元素。

在第一個 for 迴圈印出每個元素的位址，可以看到位址是連續遞增，間隔正好等於 sizeof(int)。

2.realloc 可能搬移記憶體

realloc 會嘗試在原地擴充記憶體，如果原位址附近沒有足夠空間，它會搬到新的區域，並複製舊資料。

所以 array 的起始位址可能改變，也可能不變。多執行幾次程式，你會發現有時候位址會換，有時候不換，這取決於當前程式的堆(heap)配置狀態。

3.印出 reallocation 後的位址

如果位址不同，就表示記憶體真的搬家了。

觀察每個元素的位址，可以確認搬家後元素仍然連續排列，舊資料也被保留。
--------------------------------------------------------------------------------------------------
2維
int rows = 3, cols = 4;
int *matrix = malloc(rows * cols * sizeof(int));
for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
        matrix[r * cols + c] = r * 10 + c; // 存取方式
    }
}

這樣記憶體是連續的，realloc 也可以安全擴充。
