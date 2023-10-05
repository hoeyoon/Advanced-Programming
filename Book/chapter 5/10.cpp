#include <stdio.h>

int main(){
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4행 3열 a와 3행 4열 b의 곱을 c로 구합니다.\n");

	printf("a의 각 요소 값을 입력하세요.\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("b의 각 요소 값을 입력하세요.\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("b[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			c[i][j] = 0;
			for(int k = 0; k < 3; k++){
				c[i][j] += a[i][j] * b[i][j];
			}
		}
	}
	printf("c의 값은 다음과 같습니다. \n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("c[%d][%d] = %d\n", i, j, c[i][j]);
		}
	}
	return 0;
}

