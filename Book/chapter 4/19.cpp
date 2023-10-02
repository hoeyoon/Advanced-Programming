#include <stdio.h>

int main(){
  int n;
  printf("몇 개의 *를 출력할까요? ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n까지 반복
    printf("*");
    if(i % 5 == 0){ //만약 i가 5의 배수라면 줄바꿈
      printf("\n");
    }
  }
  printf("\n");
  return 0;
}