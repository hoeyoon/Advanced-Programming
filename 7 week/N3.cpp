/*
## 문제 설명 
[문제 7-15]과 비슷하게 double형 변수로 넓이를 입력받는다. 
여기서, 정사각형의 넓이가 아니라, 원의 넓이라 간주하고 반지름을 계산한다.
PI는 3.14로 계산하며, 반지름은 소수점 둘째 자리까지 표시한다.

## 입력 예시#1
3.14

## 출력 예시#1
1.00

## 입력 예시#2
6.5

## 출력 예시#2
1.44

## 입력 예시#3
10.9

## 출력 예시#3
1.86
*/

#include <stdio.h>
#include <math.h>

int main(){
  double pi = 3.14;
  double area;
  scanf("%lf", &area);
  // area = r * r * pi
  double r2 = area / pi;
  double r = sqrt(r2);

  printf("%.2lf\n", r);
  return 0;
}