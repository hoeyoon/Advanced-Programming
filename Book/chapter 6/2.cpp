#include <stdio.h>

int min(int a, int b, int c){
	int min = a;
	if(min > b){
		min = b;
	}
	if(min > c){
		min = c;
	}
	return min;
}

int main(){
	int a, b, c;
	printf("정수 3개를 입력하세요.\n");

	printf("정수 1 : ");
	scanf("%d", &a);

	printf("정수 2 : ");
	scanf("%d", &b);

	printf("정수 3 : ");
	scanf("%d", &c);

	printf("최솟값은 %d입니다.\n", min(a, b, c));
	return 0;
}

