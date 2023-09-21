#include <stdio.h>

int main(){
  int a, b;

  printf("2개의 정수를 입력하세요.\n");

  printf("정수 A : ");
  scanf("%d", &a);

  printf("정수 B : ");
  scanf("%d", &b);

  if(a == b){
    printf("두 값은 같습니다.\n");
  }
  else{
    int max, min;
    if(a > b){
      max = a;
      min = b;
    }
    else{
      max = b;
      min = a;
    }
    printf("작은 값은 %d입니다.\n", min);
    printf("큰 값은 %d입니다.\n", max);
  }
  return 0;
}
