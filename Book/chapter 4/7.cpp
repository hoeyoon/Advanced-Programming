#include <stdio.h>

int main(){
  int a;
  printf("양의 정수를 입력하세요: ");
  scanf("%d", &a);

  if(a >= 1){
    int i = 2;
    while(i <= a){
      printf("%d ", i);
      i *= 2;
    }
    printf("\n");
  }
  return 0;
}
