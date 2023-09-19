#include <stdio.h>

int main(){
	int a, b;
	printf("2개의 정수를 입력하세요.\n");

	printf("정수 A : ");
	scanf("%d", &a);

	printf("정수 B : ");
	scanf("%d", &b);

	if(a % b == 0){
		printf("B는 A의 약수입니다.\n");
	}
	else{
		printf("B는 A의 약수가 아닙니다.\n");
	}
	return 0;
}

