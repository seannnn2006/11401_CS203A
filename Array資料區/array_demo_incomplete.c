#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
  size_t n = 10;//用size_t表示大小，比int安全
  int *array = NULL; //初始化指標為NULL，避免野指標

  array = malloc(n * sizeof *array);//分配記憶體，sizeof *array可避免重複寫型別
  if(array=NULL) { //檢查malloc是否成功
    perror("malloc失敗");
    return EXIT_FAILURE;
  }

  for(size_t i = 0;i < n; ++i){
  array[i] = (int)(i+1); //初始化前n個元素
  }

  for(size_t i = 0;i < n; ++i){
    print("%d ",array[i]); //印出原始陣列內容
  }
  printf("\n");

  if(n > SIZE_MAX/2){ //確保n*2不會溢位
    fprintf(stderr,"大小過大，可能overflow\n");
    free(array);
    return EXIT_FAILURE;
  }
  size_t new_n = n * 2; // 新大小=原本大小的兩倍
  
  int *tmp= realloc(array, new_n * sizeof *array);//用暫存指標皆realloc結果
  if(tmp==NULL){ //檢查realloc是否成功
    perror("realloc 失敗");
    free(array);  //realloc失敗時原array還有效，要釋放
    return EXIT_FAILURE;
  }
  array=tmp; //realloc成功後要更新指標

  for(size_t i = n;i< new_n;++i){
  array[i]=(int) (i+1);//初始化新分配的元素
  }

  for(size_t i = 0;i<new_n;++i){
  printf("%d ",array[i]);//印出擴充後的陣列
  }
  printf("\n");

  free(array);//釋放記憶體，避免memory leak
  return EXIT_SUCCESS;
}
