#include <stdio.h>

int main(){
  double a, b;

  printf("2개의 정수를 입력하세요.\n");

  printf("정수 a : ");
  scanf("%lf", &a);

  printf("정수 b : ");
  scanf("%lf", &b);

  printf("a값은 b의 %f%%입니다.\n", 100 * a / b);
  return 0;
}