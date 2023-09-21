#include <stdio.h>

int main() {
  int a, b;
  printf("2개의 정수를 입력하세요.\n");
  printf("정수 A : ");
  scanf("%d", &a);

  printf("정수 B : ");
  scanf("%d", &b);

  if (a == b) {
    printf("A와 B는 같습니다.\n");
  } else if (a > b) {
    printf("A는 B보다 큽니다.\n");
  } else {
    printf("A는 B보다 작습니다.\n");
  }
  return 0;
}
