#include <stdio.h>

int main(){
  int h, s, e, count;

  printf("몇 cm부터 : ");
  scanf("%d", &s);

  printf("몇 cm까지 : ");
  scanf("%d", &e);

  printf("몇 cm마다 : ");
  scanf("%d", &count);

  for(h = s; h <= e; h += count){ //s값 부터 e까지 값을 count만큼 늘려 반복
    printf("%dcm %.2fkg\n", h, (h - 100) * 0.9); //키, 표준몸무게 출력
  }
  return 0;
}