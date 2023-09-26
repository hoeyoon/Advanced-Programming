#include <stdio.h>

int main(){
  int a;
  printf("양의 정수를 입력하세요: ");
  scanf("%d", &a);

  if(a > 0){
    while(a >= 0){
      printf("%d ", a);
      a--;
    }
    printf("\n");
  }
  
  return 0;
}
