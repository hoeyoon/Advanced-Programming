#include <stdio.h>

int main(){
  int a, b, c;
  printf("3개의 정수를 입력하세요.\n");

  printf("정수 1 : ");
  scanf("%d", &a);

  printf("정수 2 : ");
  scanf("%d", &b);

  printf("정수 3 : ");
  scanf("%d", &c);

  printf("최솟값은 %d입니다.\n", (a < b) ? ((a < c) ? a : c) : (b < c) ? b : c);
  return 0;
}
