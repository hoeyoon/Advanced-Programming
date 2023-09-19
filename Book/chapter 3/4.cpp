#include <stdio.h>

int main(){
	int a;

	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	if(a < 0){
		a = -a;
	}
	printf("절댓값은 %d입니다.\n", a);
	return 0;
}

