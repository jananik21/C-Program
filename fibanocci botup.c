#include <stdio.h>

void fibonacci(int n, int arr[]) {
    int i;
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int arr[n+1];

    fibonacci(n, arr);

    printf("The Fibonacci series is: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
