/*
##문제 설명
3개의 정수를 입력받고 식 y = x + y - z의 결과를 출력하는 프로그램을 작성해보자

##입력 예시
3개의 정수를 입력하세요.
정수 1 : 8
정수 2 : 7
정수 3 : 2

##출력 예시
이 세 값의 계산 결과는 13입니다.
*/

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
