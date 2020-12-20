#include <stdio.h>
#include <math.h>

int main() {
	int n;
	int counter = 0;
	double S = 0;
	printf("Enter your n value : ");
	scanf_s("%d", &n);


	for (int i = 1; i <= n; i++) {
		double line1 = 1;
		double line2 = (3 * i) * log(i + 1);

		for (int j = 1; j <= i; j++) {
			line1 *= 2 * j + 1;
		}

		S += line1 / line2;
		counter += 3 * i + 6;
	}
	printf("result : %lf\n", S);
	printf("counter : %d", counter);
	return 0;
}
