/*
## 문제 설명
공백을 포함하는 문자열을 입력받아 짝수 번째에 있는 문자를 삭제하는 코드를 작성하시오.
문자열의 길이는 최대 100개로 제한한다.

## 입력 예시 1
SuPpEr55

## 출력 예시 1
SPE5

## 입력 예시 2
How are you Doing

## 출력 예시 2
HwaeyuDig

## 입력 예시 3
sQuID GaMe

## 출력 예시 3
suDGM
*/

#include <stdio.h>

void del_str(char *s){
	char *p = s;
	int i = 0;
	while(s[i] != '\0'){
		if(i % 2 == 0){
			*p = s[i];
			p++;
		}
		i++;
	}
	*p = '\0';
}

int main(){
	char str[128];

	scanf("%[^\n]s", str);
	del_str(str);
	printf("%s\n", str);
	return 0;
}

