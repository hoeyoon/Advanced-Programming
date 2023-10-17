#include <stdio.h>
#include <limits.h>

int main(){
	printf("char형은 %u바이트\n", (unsigned)sizeof(char));
	printf("short형은 %u바이트\n", (unsigned)sizeof(short));
	printf("int형은 %u바이트\n", (unsigned)sizeof(int));
	printf("long형은 %u바이트\n", (unsigned)sizeof(long));
	printf("float형은 %u바이트\n", (unsigned)sizeof(float));
	printf("double형은 %u바이트\n", (unsigned)sizeof(double));
	printf("long double형은 %u바이트\n", (unsigned)sizeof(long double));
	return 0;
}
