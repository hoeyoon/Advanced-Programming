#include <stdio.h>
#define NUMBER 5
#define FAILED -1

int searchr(const int v[], int key, int n){
  for(int i = n - 1; i >= 0; i--){
    if(v[i] == key){
      return i;
    }
  }
  return FAILED;
}

int main(){
  int vx[NUMBER];
  for(int i = 0; i < NUMBER; i++){
    printf("vx[%d] : ", i);
    scanf("%d", &vx[i]);
  }
  int n;
  printf("찾을 값 : ");
  scanf("%d", &n);

  if(searchr(vx, n, NUMBER) == FAILED){
    printf("\a탐색에 실패했습니다.\n");
  }
  else{
    printf("%d은(는) %d번째에 있습니다.\n", n, searchr(vx, n, NUMBER) + 1);
  }
  return 0;
}
