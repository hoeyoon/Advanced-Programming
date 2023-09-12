#include <stdio.h>

int main(){
  int n1, n2;
  
  puts("2개의 정수값을 입력하세요.");
  printf("정수 1 : ");
  scanf("%d", &n1);

  printf("정수 2 : ");
  scanf("%d", &n2);

  printf("이 두 값의 곱은 %d입니다.\n", n1 * n2);
  return 0;
}