#include <stdio.h>

int main(){
  int x[3];
  puts("3개의 정수를 입력하세요.");
  
  for(int i = 0; i < 3; i++){
    printf("정수 %d : ", i + 1);
    scanf("%d", &x[i]);
  }

  printf("이 세 값의 계산 결과는 %d입니다.\n", x[0] + x[1] - x[2]);
  return 0;
}