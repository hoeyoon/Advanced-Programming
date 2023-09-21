#include <stdio.h>

int main(){
  int a, b;
  printf("2개의 정수를 입력하세요.\n");

  printf("정수 1 : ");
  scanf("%d", &a);

  printf("정수 2 : ");
  scanf("%d", &b);

  int diff = 0;
  if(a > b){
    diff = a - b;
  }
  else{
    diff = b - a;
  }
  printf("두 값의 차이는 %d입니다.\n", diff);
  
  return 0;
}
