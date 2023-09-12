#include <stdio.h>

int main(){
  int a, b;
  printf("2개의 정수값을 입력하세요.\n");

  printf("정수 a : ");
  scanf("%d", &a);

  printf("정수 b : ");
  scanf("%d", &b);

  printf("두 값의 합은 %d이고 곱은 %d입니다.\n", a + b, a * b);
  return 0;
}