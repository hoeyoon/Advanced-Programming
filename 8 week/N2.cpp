#include <stdio.h>

int main(){
  int m, d;
  scanf("%d월 %d일", &m, &d);
  int day[14] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int sum = 0;
  for(int i = 1; i <= m - 1; i++){
    sum += day[i];
  }
  sum = sum + d;
  printf("%d일 남음\n", 365 - sum + 1);
  return 0;
}