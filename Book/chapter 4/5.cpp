#include <stdio.h>

int main(){
  int a;
  printf("양의 정수를 입력하세요: ");
  scanf("%d", &a);

  if(a >= 1){
    int i = 1;
    while(i <= a){
      printf("%d ", i++);
    }
    printf("\n");
  }
  
  return 0;
}
