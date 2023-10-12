#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]){
  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      c[i][j] = 0;
      for(int k = 0; k < 3; k++){
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
}

int main(){
	int a[4][3];
	int b[3][4];
	int c[4][4];

	printf("4행 3열 mx와 3행 4열 my의 곱을 구합니다.\n");
  printf("행렬 mx\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("mx[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("행렬 my\n");
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("my[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

  mat_mul(a, b, c);
	
	printf("행렬의 곱\n");
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("%4d", c[i][j]);
		}
    printf("\n");
	}
	return 0;
}
