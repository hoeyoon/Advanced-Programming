#include <stdio.h>

int main(){
  int x, y;
  printf("2개의 정숫값을 입력하세요.\n");

  printf("정수 x : ");
  scanf("%d", &x);

  printf("정수 y : ");
  scanf("%d", &y);

  printf("평균값의 부호를 반전한 값은 %d입니다.\n", -((x + y) / 2));
  return 0;
}