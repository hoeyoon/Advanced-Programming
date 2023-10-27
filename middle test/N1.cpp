#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	float f = n / 100;
	float s = n % 100 / 10;
	float t = n % 100 % 10;
	printf("%0.0f, %0.0f, %0.0f\n", f, s, t);
	float avg = ((float)f + (float)s + (float)t) / 3.0;
	printf("%0.2f\n", avg);
	return 0;
}
