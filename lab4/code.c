#include <stdio.h>

#define M 10
#define N 7

int matrix[M][N] = {
	{-2, 0, 2, 4, 6, 7, 9 },
	{-2, 0, 2, 4, 6, 7, 9 },
	{-2, 0, 2, 4, 6, 7, 9 },
	{-2, 0, 2, 4, 6, 7, 9 },
	{-3, 0, 1, 4, 6, 7, 9 },
	{-3, 0, 1, 3, 6, 7, 9 },
	{-3, -1, 1, 3, 5, 7, 9 },
	{-3, -1, 1, 3, 5, 7, 8 },
	{-3, -1, 1, 3, 5, 7, 8 },
	{-3, -1, 1, 3, 5, 7, 8 } 
};

int main() {
	int num;
	int column = 0;
	printf("Input your number from 0 to 5 included : ");
	scanf_s("%d", &num);
	if (num < 0 || num > 5) {
		printf("Your number doesn't belong to the interval \n");
		return 0;
	}
	while (column < 5) {
		int bottom = 0;
		int top = 9;
		int middle = (bottom + top) / 2;
		while (bottom <= top) {
			if (matrix[middle][column] == num) {
				printf("Your number is on [%d, %d]\n", column, middle);
				break;
			}
			else if (matrix[middle][column] < num) {
				top = middle - 1; 
			}
			else if (matrix[middle][column] > num) {
				bottom = middle + 1;
			}
			middle = (bottom + top) / 2;
		}
		column++;
	}
	return 0;
}
