#include <stdio.h>

int num, last, first, tot, prod;

int main() {
	printf("Please enter a number: "); scanf("%d", &num);
	last = num % 10;
	num /= 10;
	while(0 < num) {
		first = num % 10;
		num /= 10;
	}
	printf("First digit: %d\n", first);
	printf("Last digit: %d\n", last);
	tot = first + last;
	printf("Sum of first and last digit: %d\n", tot);
	prod = first * last;
	printf("Product of first and last digit: %d\n", prod);
	if(first < last) {
		printf("Last digit is greater than first\n");
	}
	else if(last < first) {
		printf("First digit is greater than last\n");
	}
	printf("\n");system("PAUSE");return 0;
}
