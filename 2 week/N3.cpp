/*
## 문제 설명 
길이를 인치(inch)로 입력받아 센티미터(cm)로 변환하여 인치와 센티미터를 출력하는 프로그램을 작성해보자.  1 인치(inch)는 2.54 센티미터(cm)에 해당한다.

## 입력 예시 1
10 

## 출력 예시 1
10.000000 inch = 25.400000 cm 

## 입력 예시 2
32

## 출력 예시 2
32.000000 inch = 81.280000 cm
*/

#include <stdio.h>

int main(){
  float x;
  scanf("%f", &x);

  printf("%f inch = %f cm\n", x, x * 2.54);
  return 0;
}