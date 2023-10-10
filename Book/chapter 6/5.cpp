#include <stdio.h>

int sumup(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}

int main(){
	int n;
	printf("정숫값 : ");
	scanf("%d", &n);

	printf("1부터 %d까지의 합은 %d입니다.\n", n, sumup(n));
	return 0;
}

