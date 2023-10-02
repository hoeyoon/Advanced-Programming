#include <stdio.h>

int main(){
  int n;
  printf("n의 값 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지 반복
    printf("%d의 제곱은 %d\n", i, i * i); //i의 제곱 출력
  }
  return 0;
}