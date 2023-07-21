#include <stdio.h>

void fibonacci(int n, int arr[])
{
    if (n == 0)
    {
        arr[0] = 0;
        return 0;
    }
    else if (n == 1)
    {
        arr[0] = 0;
        arr[1] = 1;
        return 1;
    }
    else
    {
        fibonacci(n-1, arr);
        arr[n] = arr[n-1] + arr[n-2];
    }
}

int main()
 {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int arr[n];

    fibonacci(n, arr);

    printf("The Fibonacci series is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

