#include <stdio.h>

int main(){
  float x, y, z;

  scanf("%f", &x);
  scanf("%f", &y);
  scanf("%f", &z);

  int sum = (float)x + (float)y + (float)z;
  printf("sum is %d\n", sum);
  printf("average is %f\n", (x + y + z) / 3);
  return 0;
}