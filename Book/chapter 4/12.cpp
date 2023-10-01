#include <stdio.h>

int main(){
  int no;

  do{
    printf("양의 정수를 입력하세요 : ");
    scanf("%d", &no);
    if(no <= 0){ //no의 값이 양수가 아니라면 아래 문장 출력
      printf("\a양의 정수만 입력해주세요.\n");
    }
  }while(no <= 0); //no가 양수이면 반복문 종료

  printf("%d를 거꾸로 읽으면 ", no);
  while(no > 0){ // no의 값이 0보다 작거나 같으면 반복문 종료
    printf("%d", no % 10); //no의 나머지출력 ex) 1963의 나머지 3
    no /= 10; //no를 10으로 나눔 ex) 1963 / 10 = 196
  }
  printf("입니다.\n");
  return 0;
}