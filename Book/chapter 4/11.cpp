#include <stdio.h>

int main(){
  int no;

  printf("양의 정수: ");
  scanf("%d", &no);

  if(no > 0){
    for(int i = 1; i <= no; i++){
      if(i % 2 == 1){
        printf("+");
      }
      else{
        printf("-");
      }
    }
    printf("\n");
  }
  return 0;
}