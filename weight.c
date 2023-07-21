#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int N, int W, int profit[], int weight[]) {
    int table[N+1][W+1];
    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= W; j++) {
            if(i == 0 || j == 0)
                table[i][j] = 0;
            else if(weight[i-1] <= j)
                table[i][j] = max(table[i-1][j], table[i-1][j-weight[i-1]] + profit[i-1]);
            else
                table[i][j] = table[i-1][j];
        }
    }
    return table[N][W];
}

int main() {
    int N = 3, W = 4;
    int profit[] = {1, 2, 3};
    int weight[] = {4, 5, 1};
    int max_profit = knapsack(N, W, profit, weight);
    printf("Maximum possible profit: %d\n", max_profit);
    return 0;
}
