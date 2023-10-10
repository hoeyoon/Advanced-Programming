#include <stdio.h>

int cube(int n){
	return n * n * n;
}

int main(){
	int n;
	printf("정숫값 : ");
	scanf("%d", &n);

	printf("%d의 3제곱 값은 %d입니다.\n", n, cube(n));
	return 0;
}

