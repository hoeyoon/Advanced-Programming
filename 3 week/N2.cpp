/*
## 문제 설명
3개의 정수를 입력으로 받은 후, 이 수들 중 크기 순서로 중간에 있는 값에서
가장 멀리 떨어진 수를 출력하라. 단, 떨어진 거리가 같은 경우에는 작은 값을
출력한다.

아래 “입력 예시 1”의 3개 숫자 중 크기 순서로 중간에 있는 값은 4이다.
4에서 9까지는 5만큼 떨어져 있고, 4에서 3까지는 1만큼 떨어져 있다.
따라서, 4에서 가장 멀리 떨어져 있는 수는 9이다.

## 입력 예시 1
3
9
4

## 출력 예시 1
9
*/

#include <stdio.h>

int main(){
  int x[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &x[i]);
  }

  int temp = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0 ; j < 3; j++){
      if(x[i] < x[j]){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
  int diff1, diff2;
  if(x[1] > x[0]){
    diff1 = x[1] - x[0];
  }
  else{
    diff1 = x[0] - x[1];
  }
  if(x[1] > x[2]){
    diff2 = x[1] - x[2];
  }
  else{
    diff2 = x[2] - x[1];
  }
  
  if(diff1 == diff2){
    if(x[2] > x[0]){
      printf("%d\n", x[0]);
    }
    else{
      printf("%d\n", x[2]);
    }
  }

  else if(diff1 > diff2){
    printf("%d\n", x[0]);
  }
  
  else{
    printf("%d\n", x[2]);
  }
  return 0;
}
