#include <stdio.h> //引入標準輸出入函式庫，用於printf()
#include <stdlib.h> //引入標準函式庫，用於malloc()和free()
//定義節點結構
typedef struct Node{
int data;
struct Node* next;
}Node; //使用typedef讓我們可以直接用Node作為型別名稱

//建立新節點並印出記憶體資訊
Node* createNode(int value, int index){
Node* newNode = (Node*)malloc(sizeof(Node));//配置記憶體空間給新節點
  if(newNode == NULL){ //檢查malloc是否成功
    printf("Memory allocation failed.\n");
    exit(1); //結束程式
  }
  newNode->data = value;
  newNode->next = NULL;

  printf("Created Node %d -> Address: %p, Value: %d\n", index, (void*)newNode, newNode->data);
  
  return newNode;
}
// 遍歷整個 Linked List 並印出每個節點的記憶體資訊
void traverseList(Node* head){
Node* current = head;//從head開始遍歷
int index = 0;//節點編號(從0開始)

  while(current!=NULL){
    printf("Node %d: Value = %d, Address = %p, Next = %p\n,index,current->data,(void*)current,(void*)current->next");
    current = current->next;
    index++;
  }
}

// 釋放整個 Linked List 的記憶體並印出釋放資訊
void freeList(Node* head){
  Node* current = head;
  int index = 0;

  while(current!=NULL){
    Node* temp = current;
    current = current->next;
    printf("Freeing Node %d -> Address: %p, Value: %d\n", index, (void*)temp, temp->data);
    free(temp);
    index++;
  }
}

int main(){
//建立Linked List:10->20->30
  Node* head = createNode(10,0);
  head->next = createNode(20,1);
  head->next->next = createNode(30,2);
  //印出整個串列的記憶體資訊
  printf("\nTraversing the linked list:\n");
  traverseList(head);
  //釋放所有節點的記憶體
  printf("\nFreeing the linked list:\n");
  freeList(head);

  return 0;
}
🧠記憶體觀察重點
✅ 建立節點時
每個malloc()配出獨立記憶區塊
地址通常不連續，顯示動態配置特性
✅ 釋放節點時
每個節點都需個別free
若忘記釋放會造成memory leak


🔍與陣列比較 list                    array     
記憶體配置  給個節點獨立配置(malloc)   一次性連續配置(int arr[3])
記憶體位置  不一定連續                一定連續
插入/刪除   O(1)                     O(n)要搬動元素
記憶體釋放  每個節點須個別free()      整體釋放一次即可
