/*
# 문제 설명

10개의 정수를 1차원 배열에 읽어 들인 후 아래 함수를 이용하여 내림차순으로
정렬하고 출력하는 프로그램을 작성한다. 입출력은 main() 함수에서 실행하고,
정렬은 [문제 8-5]에서 학습한 버블정렬 알고리즘을 응용한다.
함수 sort() 내에서 배열을 사용하지 않고 포인터와 간접 연산자(*)를 사용한다.

void swap(int *px, int *py)	교재 내용과 동일 
void sort(int *v, int n)

# 입력 예시 1
8 9 5 3 4 7 6 2 5 1

# 출력 예시 1
9 8 7 6 5 5 4 3 2 1 

# 입력 예시 2
1 2 3 4 5 6 7 8 9 10

# 출력 예시 2
10 9 8 7 6 5 4 3 2 1 

# 입력 예시 3
7 6 5 4 3 2 1 8 9 1

# 출력 예시 3
9 8 7 6 5 4 3 2 1 1 
*/

#include <stdio.h>

void swap(int *px, int *py){
  int temp;
  temp = *px;
  *px = *py;
  *py = temp;
}

void sort(int *v, int n){
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(*(v + i) > *(v + j)){
        swap((v + i), (v + j));
      }
    }
  }
}

int main(){
  int s[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &s[i]);
  }
  sort(s, 10);
  for(int i = 0; i < 10; i++){
    printf("%d ", s[i]);
  }
  return 0;
}