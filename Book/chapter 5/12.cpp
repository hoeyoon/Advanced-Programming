#include <stdio.h>

int main(){
	int score[2][4][3] = {
			{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}
	};

	int sum[4][3];

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			sum[i][j] = score[0][i][j] + score[1][i][j];
		}
	}
	for(int i = 0; i < 2; i++){
		printf("%d번째 점수\n", i + 1);
		for(int j = 0; j < 4; j++){
			for(int k = 0; k < 3; k++){
				printf("%4d", score[i][j][k]);
			}
			printf("\n");
		}
	}
	printf("점수 합계\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("%4d", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}

