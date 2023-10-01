#include <stdio.h>

int main(){
  int n;
  printf("n의 값: ");
  scanf("%d", &n);

  int sum = 0; //합
  for(int i = 1; i <= n; i++){ // 1부터 n까지 반복
    sum += i; //i의 값을 sum에 더함 ex) 1 + 2 + 3 + ...
  }
  printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
  return 0;
}