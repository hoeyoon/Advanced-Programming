/*
# 문제 설명

0~100 범위의 성적을 읽어 들인 후 아래 함수를 이용하여 학점을 부여하고
출력하는 프로그램을 작성한다. 입출력은 main() 함수에서 실행한다.
성적에 따른 학점은 다음과 같이 부여한다.
90~100점: A, 80~89점: B, 70~79점: C, 60~69점: D, 59점 이하: F

char grade(int *score)

# 입력 예시 1
100

# 출력 예시 1
A

# 입력 예시 2
87

# 출력 예시 2
B

# 입력 예시 3
53

# 출력 예시 3
F
*/

#include <stdio.h>

char grade(int *score){
  if(*score >= 90){
    return 'A';
  }
  else if(*score >= 80){
    return 'B';
  }
  else if(*score >= 70){
    return 'C';
  }
  else if(*score >= 60){
    return 'D';
  }
  else{
    return 'F';
  }
}

int main(){
  int s;
  scanf("%d", &s);
  printf("%c\n", grade(&s));
  return 0;
}