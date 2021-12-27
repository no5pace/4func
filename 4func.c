#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("Welcome to my calculator!\n");

	float firstNum;
	printf("\nFirst number: ");
	scanf("%f", &firstNum);

	int operation;
	printf("\nOperation:\n[1] Addition\n[2] Subtraction\n[3] Multiplication\n[4] Division\n");
	scanf("%d", &operation);

	float secondNum;
	printf("\nSecond number: ");
	scanf("%f", &secondNum);

	float answer;
	if (operation == 1) {
		answer = firstNum + secondNum;
	}
	else if (operation == 2) {
		answer = firstNum - secondNum;
	}
	else if (operation == 3) {
		answer = firstNum * secondNum;
	}
	else if (operation == 4) {
		answer = firstNum / secondNum;
	}

	printf("\nYour answer is %f", answer);

	return 0;
}
