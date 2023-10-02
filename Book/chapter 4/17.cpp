#include <stdio.h>

int main(){
  int n;
  printf("정숫값: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i += 2){ //i를 1부터 n의 값까지 2씩 증가하여 반복
    printf("%d ", i);
  }
  printf("\n");
  return 0;
}