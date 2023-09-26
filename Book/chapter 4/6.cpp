#include <stdio.h>

int main(){
  int i, no;

  printf("양의 정수를 입력하세요: ");
  scanf("%d", &no);

  if(no >= 1){
    int i = 2;
    while(i <= no){
      printf("%d ", i);
      i += 2;   
    }
    printf("\n");
  }
  return 0;
}
