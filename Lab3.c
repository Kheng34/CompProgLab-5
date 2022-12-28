#include <stdio.h>

int a, i, result;

int main() {
	printf("Please enter a number: "); scanf("%d", &a);
	printf("Multiplication Table of %d:\n", a);
	for(i = 1; i <= 10; i++) {
		result = a * i;
		printf("%d * %d = %d\n", a, i, result);
	}
	printf("\n");system("PAUSE");return 0;
}
