#include <stdio.h>

int main(){
  int n, c;
  printf("몇 개의 *를 표시할까요? ");
  scanf("%d", &n);

  printf("몇 개마다 줄 바꿈할까요? ");
  scanf("%d", &c);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    printf("*");
    if(i % c == 0){ //i가 c의 값의 나머지가 0이면 줄바꿈
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}