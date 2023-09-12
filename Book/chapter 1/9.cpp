#include <stdio.h>

int main(){
  int no;

  printf("정수를 입력하세요 : ");
  scanf("%d", &no);

  printf("%d에서 6을 빼면 %d입니다.\n", no, no - 6);
  return 0;
}