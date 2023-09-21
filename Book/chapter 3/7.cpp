#include <stdio.h>

int main(){
  int n1, n2, n3, min;

  printf("3개의 정수를 입력하세요.\n");
  printf("정수 1 : ");
  scanf("%d", &n1);

  printf("정수 2 : ");
  scanf("%d", &n2);

  printf("정수 3 : ");
  scanf("%d", &n3);

  min = n1;

  if(n2 < min){
    min = n2;
  }
  if(n3 < min){
    min = n3;
  }
  printf("최솟값은 %d입니다.\n", min);
  return 0;
}
