#include <stdio.h>

int main(){
  int no;
  
  do{
    printf("양의 정수를 입력하세요: ");
    scanf("%d", &no);
    if(no <= 0){
      printf("\a양의 정수만 입력해주세요.\n");
    }
  }while(no <= 0);

  int temp = no; //temp에 no의 값 저장
  int count = 0; //자릿수 계산
  while(temp != 0){ // temp가 0아 아닐때까지 반복
    temp /= 10; //temp의 값을 10으로 나눔 ex) 1963 / 10 == 196
    count++; //자릿수의 개수 1씩 증가
  }
  printf("%d은(는) %d자리입니다.\n", no, count);
  return 0;
}