#include <stdio.h>

int main(){
  int x, y;
  printf("2개으 정숫값을 입력하세요.\n");

  printf("정수 x : ");
  scanf("%d", &x);

  printf("정수 y : ");
  scanf("%d", &y);

  printf("x값은 y값의 %d%%입니다.\n", 100 * x / y);

  return 0;
}