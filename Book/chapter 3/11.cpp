#include <stdio.h>

int main(){
  int a, b, c;

  printf("3개의 정수를 입력하세요.\n");

  printf("정수 A : ");
  scanf("%d", &a);

  printf("정수 B : ");
  scanf("%d", &b);

  printf("정수 C : ");
  scanf("%d", &c);

  if(a == b && b == c){
    printf("3개의 값이 모두 같습니다.\n");
  }
  else if(a == b || b == c || c == a){
    printf("2개의 값이 같습니다.\n");
  }
  else{
    printf("3개 값은 모두 다릅니다.\n");
  }
  return 0;
}
