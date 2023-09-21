#include <stdio.h>

int main(){
  int n1, n2, n3, max;

  printf("3개의 정수를 입력하세요.\n");
  printf("정수 1 : ");
  scanf("%d", &n1);

  printf("정수 2 : ");
  scanf("%d", &n2);

  printf("정수 3 : ");
  scanf("%d", &n3);

  max = n1;

  if(n2 > max){
    max = n2;
  }
  if(n3 > max){
    max = n3;
  }
  printf("최솟값은 %d입니다.\n", max);
  return 0;
}
