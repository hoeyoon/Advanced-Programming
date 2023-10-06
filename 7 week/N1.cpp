/*
## 문제 설명
[문제 7-7]에서 unsigned형 대신에 signed short형 정수를 입력받고, 절대값을 취한 뒤에
내부 비트를 출력하는 프로그램을 작성하자. 
singed short형을 입력받을 경우의 형식지정자는 %hd인 것에 주의하자.

## 입력 예시#1
10

## 출력 예시#1
0000000000001010

## 입력 예시#2
-9

## 출력 예시#2
0000000000001001

## 입력 예시#3
-15

## 출력 예시#3
0000000000001111
*/

#include <stdio.h>

void print_bits(short num){
  for (int i = 15; i >= 0; --i){
    printf("%d", (num >> i) & 1);
  }
  printf("\n");
}

int main(){
  short n;
  scanf("%hd", &n);
  if(n < 0){
    n = -n;
  }
  print_bits(n);
  return 0;
}