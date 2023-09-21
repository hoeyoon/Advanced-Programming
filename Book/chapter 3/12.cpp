#include <stdio.h>

int main(){
  int a, b;
  printf("2개의 정수를 입력하세요.\n");

  printf("정수 A : ");
  scanf("%d", &a);

  printf("정수 B : ");
  scanf("%d", &b);

  int diff = a - b;
  if(diff > 10 || diff < -10){
    printf("두 값의 차이는 11 이상입니다\n");
  }
  else{
    printf("두 값의 차이는 10 이하입니다.\n");
  }
  return 0;
}
