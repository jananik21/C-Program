#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX 1000

char board[MAX][MAX];
bool visited[MAX][MAX];
int m, n;

bool search(int row, int col, char* word, int index) {
    if (index == strlen(word)) {
        return true;
    }
    if (row < 0 || row >= m || col < 0 || col >= n || visited[row][col] || board[row][col] != word[index]) {
        return false;
    }
    visited[row][col] = true;
    bool res = search_word(row+1, col, word, index+1) || search_word(row-1, col, word, index+1)
                || search_word(row, col+1, word, index+1) || search_word(row, col-1, word, index+1);
    visited[row][col] = false;
    return res;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word) {
    m = boardSize;
    n = *boardColSize;
    memset(visited, false, sizeof(visited));
    int i,j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (search_word(i, j, word, 0)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int boardSize, boardColSize[MAX];
    char board[MAX][MAX], word[MAX];

    printf("Enter the number of rows in the board: ");
    scanf("%d", &boardSize);
    printf("Enter the number of columns in the board: ");
    scanf("%d", &boardColSize[0]);

    printf("Enter the characters in the board row by row:\n");
    int i;
    for ( i = 0; i < boardSize; i++) {
        scanf("%s", board[i]);
    }

    printf("Enter the word to be searched: ");
    scanf("%s", word);

    bool result = exist(board, boardSize, boardColSize, word);

    if (result) {
        printf("The word exists in the board.\n");
    } else {
        printf("The word does not exist in the board.\n");
    }

    return 0;
}
