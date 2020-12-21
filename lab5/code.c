#include <stdio.h>

#define M 7  // ряды
#define N 7 // столбики

int matrix[M][N] = {
	{1, 0, 2, 4, 6, 7, 2 },
	{2, 7, 2, 4, 7, 7, 4 },
	{1, 5, 3, 4, 8, 7, 3 },
	{9, 2, 2, 5, 6, 7, 4 },
	{6, 5, 8, 4, 4, 7, 9 },
	{3, 8, 4, 3, 6, 2, 9 },
	{5, 5, 3, 5, 7, 6, 6 },

};

int main() {
	printf("Unsorted matrix : \n \n");
	for (int x = 0; x < 7; x++) {
		for (int y = 0; y < 7; y++) {
			printf("%d ", matrix[x][y]);
		}
		printf("\n");
	}
	printf("\nSorted by the main diagonal : \n \n");
	for (int i = 1; i < 7; i++) {
		int B = matrix[i][i];
		int j = i;
		while (j > 0 && B < matrix[j - 1][j - 1]) {
			matrix[j][j] = matrix[j - 1][j - 1];
			j = j - 1;
		}
		matrix[j][j] = B;
	}
	for (int x = 0; x < 7; x++) {
		for (int y = 0; y < 7; y++) {
			printf("%d ", matrix[x][y]);
		}
		printf("\n");
	}

	return 0;
}
