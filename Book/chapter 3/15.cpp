#include <stdio.h>

int main(){
  int a;
  printf("정수를 입력하세요 : ");
  scanf("%d", &a);

  switch(a % 2){
    case 0:
      printf("이 값은 짝수입니다.\n");
      break;
    case 1:
      printf("이 값은 홀수입니다.\n");
      break;
  }
  return 0;
}
