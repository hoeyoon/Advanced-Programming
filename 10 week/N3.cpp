/*
# 문제 설명

배열 a가 아래와 같이 초기화되어 있다. 아래 함수를 이용하여 배열의 n1번째
데이터부터 n2번째 데이터까지를 val 값으로 변경한 후 배열 전체를 출력하는
프로그램을 작성한다. n1, n2, val 값을 순서대로 입력한다.

int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  10개 데이터 초기화
void ary_set(int *v, int n1, int n2, int val)

# 입력 예시 1
7 7 35

# 출력 예시 1
1 2 3 4 5 6 35 8 9 10 

# 입력 예시 2
2 5 88

# 출력 예시 2
1 88 88 88 88 6 7 8 9 10 

# 입력 예시 3
1 10 25

# 출력 예시 3
25 25 25 25 25 25 25 25 25 25 
*/

#include <stdio.h>

void ary_set(int *v, int n1, int n2, int val){
  for(int i = n1; i <= n2; i++){
    *(v + i - 1) = val;
  }
}

int main(){
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n1, n2, val;
  scanf("%d %d %d", &n1, &n2, &val);
  ary_set(a, n1, n2, val);
  for(int i = 0; i < 10; i++){
    printf("%d ", a[i]);
  }
  return 0;
}