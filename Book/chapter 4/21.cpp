#include <stdio.h>

int main(){
  int s;
  printf("넓이: ");
  scanf("%d", &s);

  for(int i = 1; i <= s; i++){ //i를 1부터 s의 값까지 반복
    for(int j = 1; j <= s; j++){ //j를 1부터 s의 값까지 반복 
      if(i * j == s){ //i * j = s라면 아래 문장 출력
        if(i <= j){ //i가 j보다 작거나 같은 경우만 출력
          printf("%d x %d\n", i, j);
        }
      }
    }
  }
  return 0;
}