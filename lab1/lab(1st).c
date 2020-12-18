#include <stdio.h>

int main() {
	float x;
	float y;
	printf("Enter your number : ");
		scanf_s("%f", &x);
		printf("Result: \n");
		if (x > 2 && x <= 12 || x > 22 && x < 32) {
			y = -9 * x * x * x + 5 * x * x;
			printf("%f \n", y);
		}
		else if (x <= 0) {
			y = x * x - 12;
			printf("%f \n", y);
		}
		else printf("Your number is not included in the interval \n");
	return 0;
}
