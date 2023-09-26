#include <stdio.h>

int main(){
	int n;
	
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &n);
	
	if(n >= 1){
		printf("{");
		int i = 1;
		while(i < n){
			printf("%d, ", i++);
		}
		printf("%d}\n", n);
	}
	return 0;
}