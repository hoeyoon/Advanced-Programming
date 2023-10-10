#include <stdio.h>

int sqr(int n){
	return n * n;
}

int pow4(int n){
	return sqr(n) * sqr(n);
}

int main(){
	int n;
	printf("정숫값 : ");
	scanf("%d", &n);

	printf("%d의 4제곱 값은 %d입니다.\n", n, pow4(n));
	return 0;
}

