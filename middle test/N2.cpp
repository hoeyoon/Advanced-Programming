#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int day = 0;
	switch(a){
		case 2:
			day = 28;
			break;
		case 1:
		case 3:
			day = 31;
			break;
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
	}
	printf("%d ", day);
	if(b % 3 == 0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}

	return 0;
}
