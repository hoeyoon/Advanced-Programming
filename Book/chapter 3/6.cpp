#include <stdio.h>

int main() {
  int a, b;
  printf("2개의 정수를 입력하세요.\n");
  printf("변수 a : ");
  scanf("%d", &a);

  printf("변수 b : ");
  scanf("%d", &b);

  printf("등가식의 값\n");
  printf("a == b의 값 : %d\n", a == b);
  printf("a != b의 값 : %d\n", a != b);

  printf("관계식의 값\n");
  printf("a < b의 값 : %d\n", a < b);
  printf("a <= b의 값 : %d\n", a <= b);
  printf("a > b의 값 : %d\n", a > b);
  printf("a >= b의 값 : %d\n", a >= b);
  return 0;
}
