#include <stdio.h>

void main() {
	int firstNumber, secondNumber, sumOfTwoNumbers;
	printf("Enter two integers c,d: ");
	scanf("%d%d", &firstNumber, &secondNumber);
	sumOfTwoNumbers = firstNumber + secondNumber;
	printf("%d + %d = %d", firstNumber,secondNumber,sumOfTwoNumbers);
}
