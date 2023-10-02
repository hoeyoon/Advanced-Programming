#include <stdio.h>

int main(){
  int n;
  printf("피라미드를 만듭니다.\n");
  printf("몇 단인가요? ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){ //i를 0부터 n - 1의 값까지 반복
    for(int j = 1; j <= n - 1 - i; j++){ //각 행에 n - 1 - i개의 공백 출력
      printf(" ");
    }
    for(int j = 1; j <= i * 2 + 1; j++){ //각 행에 i * 2 + 1개의 *출력
      printf("*");
    }
    printf("\n"); //한줄이 출력되면 줄바꿈
  }
  return 0;
}