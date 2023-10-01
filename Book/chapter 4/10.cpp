#include <stdio.h>

int main(){
  int no;

  printf("양의 정수: ");
  scanf("%d", &no);

  while (no-- > 0){ 
  //no의 값을 1씩 줄이고 no의 값이 0보다 작거나 같으면 반복문 종료
    puts("*");
  }
  return 0;
}