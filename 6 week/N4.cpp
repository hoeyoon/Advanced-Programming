/*
main 함수는 수정하지 않고 odd 함수를 정의하여 입력한 홀수의 수를 출력하라.
힌트: static 변수.

//입출력 예시: 입력및 출력은 main 함수에서 다 정의 되어 있다. odd 함수만 정의 필요
입력할 수: 8
123
234
567
788
513
1224
147
1354
입력한 홀수의 수는 4


int main(void) {
  int s;
  printf("입력할 수: ");
  scanf("%d", &s);
  int v, odd_numbers;
  for (int i = 0; i < s; i++) {
    scanf("%d", &v);
    odd_numbers = odd(v);
  }
  printf("입력한 홀수의 수는 %d\n", odd_numbers);
  return 0;
}
*/

#include <stdio.h>

static int count = 0;

int odd(int v){
  if(v % 2 == 1){
    count++;
  }
  return count;
}

int main(void) {
  int s;
  printf("입력할 수: ");
  scanf("%d", &s);
  int v, odd_numbers;
  for (int i = 0; i < s; i++) {
    scanf("%d", &v);
    odd_numbers = odd(v);
  }
  printf("입력한 홀수의 수는 %d\n", odd_numbers);
  return 0;
}