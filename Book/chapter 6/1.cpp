#include <stdio.h>

int min(int a, int b){
	if(a > b){
		return b;
	}
	else{
		return a;
	}
	//return (a > b) ? b : a;
}

int main(){
	int a, b;
	printf("정수 2개를 입력하세요.\n");

	printf("정수 1 : ");
	scanf("%d", &a);

	printf("정수 2 : ");
	scanf("%d", &b);

	printf("작은 쪽의 값은 %d입니다.\n", min(a, b));
	return 0;
}

