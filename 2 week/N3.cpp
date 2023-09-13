#include <stdio.h>

int main(){
  float x;
  scanf("%f", &x);

  printf("%f inch = %f cm\n", x, x * 2.54);
  return 0;
}