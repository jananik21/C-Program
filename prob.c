#include <stdio.h>
int max(int a, int b)
{
return (a > b) ? a : b;
}
int knapsack(int N, int W, int profit[], int weight[])
{
int table[N+1][W+1];
int i,j;
for(i = 0; i <= N; i++)
{
for(j = 0; j <= W; j++)
{
if(i == 0 || j == 0)
table[i][j] = 0;
else if(weight[i-1] <= j)
table[i][j] = max(table[i-1][j], table[i-1][j-weight[i]] + profit[i]);
else
table[i][j] = table[i-1][j];
}
}
return table[N][W];
}

int main()
{
    int N,W,profit[10],weight[10];
    int i;
    scanf("%d %d",&N,&W);
    for(i=0;i<N;i++)
    {
        scanf("%d",&profit[i]);
    }
    for(i=0;i<W-1;i++)
    {
        scanf("%d",&weight[i]);
    }
    int max_profit = knapsack(N, W, profit, weight);
    printf("%d\n", max_profit);
}
