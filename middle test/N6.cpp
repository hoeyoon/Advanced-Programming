#include <stdio.h>

void print_bits(unsigned int x){
	int n = sizeof(int) << 3;
	int count_zero = 0;
	int count_one = 0;
	//printf("%d", n);
	for(int i = n - 1; i >= 0; i--){
		putchar((x >> i) & 1U ? '1' : '0');
		if((x >> i) & 1U){
			count_one++;
		}
		else{
			count_zero++;
		}
	}
	printf("\n0 : %d\n", count_zero);
	printf("1 : %d\n", count_one);
}

int main(){
	unsigned int n;
	scanf("%d", &n);
	print_bits(n);
	return 0;
}
