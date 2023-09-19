#include <stdio.h>

int main(){
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	if(a % 10 != 0){
		printf("이 수는 10의 배수가 아닙니다.\n");
	}
	return 0;
}

