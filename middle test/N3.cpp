#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a < 0 || b < 0 || a + b > 10){
		printf("Error!");
	}
	else{
		for(int i = 0; i < a; i++){
			for(int j = 0; j < a - i - 1; j++){
				printf(" ");
			}
			for(int j = 0; j < i + 1; j++){
				printf("%d", j + b);
			}
			printf("\n");
		}
	}
	return 0;
}
