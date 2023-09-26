#include <stdio.h>

int main(){
  int a;
  printf("양의 정수를 입력하세요: ");
  scanf("%d", &a);

  if(a >= 1){
    while(a >= 1){
      printf("%d ", a--);
    }
    printf("\n");
  }
  
  return 0;
}
