#include <stdio.h>

int main(){
  float x;
  scanf("%f", &x);

  printf("%.2f\n", (x - 100) * 0.9);
  return 0;
}