/*
##문제 설명
학번, 이름, 전화번호로 구성된 구조체를 정의하고, 값을 입력받아 출력한다.
phone_number() 함수는 문자열 배열(예: 문자열 "01012341234")로 입력받은 전화번호를 
xxx-xxxx-xxxx 형식(예: "010-1234-1234")으로 출력한다.

void phone_number(char m[], int n)

##입력 예시 1
20164242 조무역 01037129845

##출력 예시 1
20164242
조무역
010-3712-9845

##입력 예시 2
202199033 조미술 01104480201

##출력 예시 2
202199033
조미술
011-0448-0201
*/
#include <stdio.h>

typedef struct{
  int num;
  char name[100];
  char p_num[100];
}Person;

void phone_number(char *m, int n){
  int i = 0;
  while(m[i] != '\0'){
    if(i == 3 || i == 7){
      printf("-");
    }
    printf("%c", m[i]);
    i++;
  }
}

int main(){
  Person p;
  scanf("%d", &p.num);
  scanf("%s", p.name);
  scanf(" %s", p.p_num);
  printf("%d\n", p.num);
  printf("%s\n", p.name);
  phone_number(p.p_num, 20);
  return 0;
}
