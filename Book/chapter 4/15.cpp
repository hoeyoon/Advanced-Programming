#include <stdio.h>

int main(){
  int n;
  printf("양의 정수를 입력해주세요 : ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){ // 1부터 n까지 반복
    printf("%d", i % 10); 
    // i를 10으로 나누었을 때 나머지 출력 ex) 1 % 10 == 1, 11 % 10 == 1
  }
  printf("\n");
  return 0;
}