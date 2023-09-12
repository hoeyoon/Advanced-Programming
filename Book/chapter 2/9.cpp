#include <stdio.h>

int main(){
  double a, b;

  printf("2개의 실수를 입력하세요.\n");
  printf("실수 a : ");
  scanf("%lf", &a);

  printf("실수 b : ");
  scanf("%lf", &b);

  printf("a의 값은 b의 %lf%%입니다.\n", 100 *  a / b);
  return 0;
}