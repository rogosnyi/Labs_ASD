#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define COLUMN 80
#define ROW 24

#define SLEEP_TIME 1

// setting cursor position
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {

    int n = COLUMN; // columns
    int m = ROW; // rows
    int p; // variable for number of cycles/loops in spiral

    int i, j;

    int matrix[ROW][COLUMN] = { 0 };

    // cycles
    // m/2 - number of cycles/loops
    for (p = m / 2; p > 0; p--) {

        // up
        for (i = m - p - 1; i >= p - 1; i--) {

            j = p - 1;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }

        // right
        for (j = p; j <= n - p - 1; j++) {

            i = p - 1;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }
        // down
        for (i = p - 1; i < m - p + 1; i++) {

            j = n - p;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }

        // left
        for (j = n - p - 1; j >= p - 1; j--) {

            i = m - p;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }
    }

    // writes a gap
    gotoXY(m, 0);
    return 0;
}
