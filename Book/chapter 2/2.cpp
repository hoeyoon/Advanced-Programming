#include <stdio.h>

int main(){
  int x;
  printf("정수 n을 입력하세요 : ");
  scanf("%d", &x);

  printf("n / 5는 %d입니다.\n", x / 5);
  printf("n %% 5는 %d입니다.\n", x % 5);

  return 0;
}