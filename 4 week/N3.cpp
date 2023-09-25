/*
# 문제 설명 
1보다 큰 입력 정수가 넓이인 모든 직각삼각형의 밑변과 높이의 길이(정수)를
나열하는 프로그램을 작성한다.
단, 밑변의 길이는 높이의 길이보다 크지 않다.

# 입력 예시 1
18

# 출력 예시 1
1 x 36
2 x 18
3 x 12
4 x 9
6 x 6

# 입력 예시 2
15

# 출력 예시 2
1 x 30
2 x 15
3 x 10
5 x 6

# 입력 예시 3
2

# 출력 예시 3
1 x 4
2 x 2
*/

#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  int r = a * 2;

  for(int i = 1; i <= r; i++){
    if(r % i == 0){
      for(int j = 1; j <= r; j++){
        if(i * j == r){
          if(i <= j){
            printf("%d x %d\n", i, j);
          }
        }
      }
    }
  }
  
  return 0;
}