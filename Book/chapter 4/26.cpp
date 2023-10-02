#include <stdio.h>

int main(){
  int n, c;
  printf("몇 개를 출력할까요? ");
  scanf("%d", &n);

  printf("몇 개마다 줄 바꿈할까요? ");
  scanf("%d", &c);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    if(i % 2 == 1){ //i의 값이 홀수라면 +출력
      printf("+");
    }
    else if(i % 2 == 0){ //i의 값이 짝수라면 -출력
      printf("-");
    }
    if(i % c == 0){ //i를 c로 나누었을때 나머지가 0이라면 줄바꿈
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}