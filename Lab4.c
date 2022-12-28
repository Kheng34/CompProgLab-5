#include <stdio.h>

int cardNum, pass;

int main() {
	while(1) {
		printf("Please enter the Card Number: "); scanf("%d", &cardNum);
		switch(cardNum) {
			case 1234:
				printf("Please enter the Password: "); scanf("%d", &pass);
				switch(pass){
					case 0001:
						printf("Welcome, password is true\n");
						break;
				}
				break;
			default:
				printf("Card Number is wrong\n");
		}	
	}
	printf("\n");system("PAUSE");return 0;
}
