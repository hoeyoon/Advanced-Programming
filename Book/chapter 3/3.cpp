#include <stdio.h>

int main(){
	int a;

	printf("정수를 입력해주세요 : ");
	scanf("%d", &a);

	if(a == 0){
		printf("이 수는 0입니다.\n");
	}
	else if(a > 0){
		printf("이 수는 양수입니다.\n");
	}
	else if(a < 0){
		printf("이 수는 음수입니다.\n");
	}
	return 0;
}

