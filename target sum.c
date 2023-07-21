#include <stdio.h>

int main() {
    int i, j;
    int a[7] = {5, 7, 1, 2, 8, 4, 3};
    int n;
    scanf("%d", &n);

    int sum = 0;
    int count = 0;

    for (i = 0; i < 6; i++) {
        for (j = i + 1; j < 7; j++) {
            if (a[i] + a[j] == n) {
                sum = 1;
                printf("%d+%d=%d\n", a[i], a[j], n);
                count++;
            }
        }
    }

    if (count == 0) {
        printf("No two values sum up to %d\n", n);
    }

    return 0;
}
