#include <stdio.h>

int main(){
  int n;
  printf("정숫값 : ");
  scanf("%d", &n);

  int count = 0; //약수의 개수
  for(int i = 1; i <= n; i++){ //i를 1부터 n의 값까지반복
    if(n % i == 0){ //n을 i로 나누었을때 나머지가 0이면 출력
      printf("%d\n", i);
      count++; //갯수 증가
    }
  }
  printf("약수는 %d개입니다.\n", count);
  return 0;
}