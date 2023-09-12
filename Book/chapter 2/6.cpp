#include <stdio.h>

int main(){
  double x;

  printf("실수를 입력하세요 : ");
  scanf("%lf", &x);

  printf("당신은 %lf이라 입력했군요.\n", x);
  return 0;
}