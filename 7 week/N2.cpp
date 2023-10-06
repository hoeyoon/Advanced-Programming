/*
## 문제 설명 
[문제 7-8]와 비슷하게 부호 없는 short형 정수를 입력받는다. 
여기서, 비트를 오른쪽이나 왼쪽으로 회전시키는게 아니라 입력받은 정수형의
비트 전체를 반전(reverse)시키는 프로그램을 작성해보자. 
unsigned short형을 입력받을 경우의 형식지정자는 %hu인 것에 주의하자.

## 입력 예시#1
15

## 출력 예시#1
1111000000000000

## 입력 예시#2
255

## 출력 예시#2
1111111100000000
*/

#include <stdio.h>

void print_bits(unsigned short n){
  for(int i = 15; i >= 0; i--){
    printf("%d", (n >> i) & 1);
  }
  printf("\n");
}

unsigned short reverse_bits(unsigned short n){
  unsigned short reversed_num = 0;
  for(int i = 0; i < 16; ++i){
    if((n & (1 << i)) != 0){
      reversed_num |= (1 << (15 - i));
    }
  }
  return reversed_num;
}

int main(){
  unsigned short n;
  scanf("%hu", &n);
  print_bits(reverse_bits(n));
  return 0;
}