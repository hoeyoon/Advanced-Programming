/*
## 문제 설명
양의 정수 n을 입력받아 [문제 7-17]과 비슷하게 0.00부터 n번만큼 0.01씩 늘린 값의 전체 합계를 구한다. 
double형 변수와 float형 변수를 각각 활용하여 전체 합계를 모두 구한다. 
출력은 double형 변수의 합계, float형 변수의 합계, 그리고 두 합계의 차이를 절대값을 씌워서 출력한다. 
출력은 모두 소수점 열다섯 자리까지 표시한다.


## 입력 예시#1
10

## 출력 예시#1
0.550000000000000 0.549999892711639 0.000000107288361


## 입력 예시#2
100

## 출력 예시#2
50.500000000000028 50.499984741210938 0.000015258789091


## 입력 예시#3
5000

## 출력 예시#3
125025.000000002037268 125024.320312500000000 0.679687502037268
*/

#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  double sum_double = 0;
  float sum_float = 0;
  double i = 0.00;
  float j = 0.00;
  while(n >= 0){
    sum_double+=i;
    i+=0.01;
    sum_float+=j;
    j+=0.01;
    n--;
  }
  printf("%.15lf %.15f\n", sum_double, sum_float);
  if(sum_double > sum_float){
    printf("%.15lf\n", sum_double - sum_float);
  }
  else{
    printf("%.15lf\n", sum_float - sum_double);
  }
  return 0;
}