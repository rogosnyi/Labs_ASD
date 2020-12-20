#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int counter = 0;
	double S = 0;
	double line1 = 1;
	printf("Enter your n value : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {

		double line2;
		line2 = 3 * i * log(i + 1);
		line1 *= 2 * i + 1;
		S += line1 / line2;
		counter += 9;
	}

	printf("result : %lf\n", S);
	printf("counter : %d", counter);
	
	return 0;
}
