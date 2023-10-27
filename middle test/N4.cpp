#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = i * n + j + 1;
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		sum += arr[i][i];
	}
	printf("%d\n", sum);
	return 0;
}
