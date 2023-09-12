#include <stdio.h>

int main(){
  int height;

  printf("키를 입력하세요 : ");
  scanf("%d", &height);

  printf("표준체중은 %.1lf입니다.\n", (height - 100) * 0.9);
  return 0;
}