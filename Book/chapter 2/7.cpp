#include <stdio.h>

int main(){
  double r;
  printf("반지름은 : ");
  scanf("%lf", &r);

  printf("원의 넓이는 %lf입니다.\n", 3.14 * r * r);
  return 0;
}