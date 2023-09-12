#include <stdio.h>

int main(){
  int x;

  printf("정수를 입력하세요 : ");
  scanf("%d", &x);

  printf("10을 더하면 %d입니다.\n", x + 10);
  printf("10을 빼면 %d입니다.\n", x - 10);
  printf("10을 곱하면 %d입니다.\n", x * 10);
  printf("10으로 나눈 몫은 %d입니다.\n", x / 15);
  printf("10으로 나눈 나머지는 %d입니다.\n", x % 10);

  return 0;
}