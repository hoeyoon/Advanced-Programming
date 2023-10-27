/*
# 문제 설명
정수 값 n을 입력 받은 후 각 줄마다 'A'를 n, n-1, n-2, ..., 2, 1개 출력하는 재귀 함수를 구현하라.

# 입출력 예시 1: 입력 3에 따른 출력 
3
AAA
AA
A

# 입출력 예시 2: 입력 4에 따른 출력 
4
AAAA
AAA
AA
A
*/

#include <stdio.h>

void print(int n) {
  if(n <= 1) {
    printf("A");
  } 
  else{
    for (int i = 0; i < n; i++) {
      printf("A");
    }
    printf("\n");

    print(n - 1);
  }
}

int main(){
  int n;
  scanf("%d", &n);
  print(n);
  return 0;
}
