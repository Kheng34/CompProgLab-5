#include <stdio.h>

int num, lastDigit;

int main() {
	printf("Please enter a number: "); scanf("%d", &num);
	printf("Reverse of the number: ");
	while(0 < num) {
		lastDigit = num % 10;
		num -= lastDigit;
		num /= 10;
		printf("%d", lastDigit);
	}
	printf("\n");system("PAUSE");return 0;
}
