
#include <stdio.h>

int countWays(int n, int k) {
    int same = 0, diff = k,i;
    for (i = 2; i <= n; i++) {
        int prevSame = same;
        same = diff;
        diff = (prevSame + diff) * (k - 1);
    }
    return same + diff;
}

int main() {
    int n = 3, k = 2;
    int ways = countWays(n, k);
    printf("Number of ways to paint a fence of %d posts with %d colors: %d\n", n, k, ways);

    n = 7, k = 2;
    ways = countWays(n, k);
    printf("Number of ways to paint a fence of %d posts with %d colors: %d\n", n, k, ways);

    return 0;
}
