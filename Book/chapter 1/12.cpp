#include <stdio.h>

int main(){
  int n1, n2, n3;
  puts("3개의 정수값을 입력하세요.");
  printf("정수 1 : "); 
  scanf("%d", &n1);

  printf("정수 2 : ");
  scanf("%d", &n2);

  printf("정수 3 : ");
  scanf("%d", &n3);

  printf("세 값의 합은 %d입니다.\n", n1 + n2 + n3);
  
  return 0;
}