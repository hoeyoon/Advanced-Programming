#include <stdio.h>

int main(){
	int n;
	
	printf("양의 정수 : ");
	scanf("%d", &n);

	if(n >= 1){
		while(n-- > 0){
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}