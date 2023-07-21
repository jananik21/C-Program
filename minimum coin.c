#include <stdio.h>
#include <limits.h>

#define INF INT_MAX

int minCoins(int coins[], int n,int amount)
{
    int dp[amount + 1];
    dp[0] = 0;
    int i,j;
    for (i = 1; i <= amount; i++) {
        dp[i] = INF;
        for (j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INF) {
                dp[i] = dp[i] < 1 + dp[i - coins[j]] ? dp[i] : 1 + dp[i - coins[j]];
            }
        }
    }

    return dp[amount];
}

int main() {
    int coins[100],t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&coins[i]);
    }
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount;
    scanf("%d",&amount);

    int min_num_coins = minCoins(coins, n, amount);

    printf("Minimum number of coins needed to make change for %d is %d", amount, min_num_coins);

    return 0;
}
