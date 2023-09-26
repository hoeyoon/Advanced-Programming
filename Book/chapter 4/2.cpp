#include <stdio.h>

int main(){
  int a, b;
  int no, lower, upper;
  int sum = 0;

  printf("정수 A : ");
  scanf("%d", &a);

  printf("정수 B : ");
  scanf("%d", &b);

  if(a > b){
    lower = b;
    upper = a;
  }
  else{
    lower = a;
    upper = b;
  }

  no = lower;
  do{
    sum = sum + no;
    no = no + 1;
  }while(no <= upper);

  printf("%d 이상 %d 이하의 모든 정수를 더한 값은 %d입니다.\n", lower, upper, sum);
  return 0;
}
