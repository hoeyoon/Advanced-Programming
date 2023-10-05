#include <stdio.h>
#define NUMBER 7

int main(){
	int x[NUMBER];

	for(int i = 0; i < NUMBER; i++){
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	for(int i = 0; i < NUMBER / 2; i++){
		int temp = x[i];
		x[i] = x[NUMBER - i - 1];
		x[NUMBER - i - 1] = temp;
	}

	printf("반전했습니다.\n");
	for(int i = 0; i < NUMBER; i++){
		printf("x[%d] = %d\n", i, x[i]);
	}
	return 0;
}
