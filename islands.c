#include <stdio.h>
#define ROWS 5
#define COLS 5
void DFS(int mat[][COLS], int row, int col, int visited[][COLS])
{
    visited[row][col] = 1;
    int x, y;
    for (x = -1; x <= 1; x++) {
        for (y = -1; y <= 1; y++) {
            if (row + x >= 0 && row + x < ROWS && col + y >= 0 && col + y < COLS && mat[row + x][col + y] == 1 && visited[row + x][col + y] == 0) {
                DFS(mat, row + x, col + y, visited);
            }
        }
    }
}
int countIslands(int mat[][COLS])
{
    int visited[ROWS][COLS] = {0};
    int count = 0;
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (mat[i][j] == 1 && visited[i][j] == 0) {
                DFS(mat, i, j, visited);
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int mat[ROWS][COLS] = {{1, 1, 0, 0, 0},
                           {0, 1, 0, 0, 1},
                           {1, 0, 0, 1, 1},
                           {0, 0, 0, 0, 0},
                           {1, 0, 1, 0, 0}};

    printf("Number of islands: %d\n", countIslands(mat));

    return 0;
}

