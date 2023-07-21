#include<stdio.h>
def knapsack(N, W, profit, weight):
    table = [[0 for j in range(W+1)] for i in range(N+1)]

    for i in range(1, N+1):
        for j in range(1, W+1):
            if weight[i-1] <= j:
                table[i][j] = max(table[i-1][j], table[i-1][j-weight[i-1]] + profit[i-1])
            else:
                table[i][j] = table[i-1][j]

    max_profit = table[N][W]
    selected_items = []
    i = N
    j = W
    while i > 0 and j > 0:
        if table[i][j] != table[i-1][j]:
            selected_items.append(i-1)
            j -= weight[i-1]
        i -= 1

    return max_profit, selected_items[::-1]
