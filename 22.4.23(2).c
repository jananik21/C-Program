#include <stdio.h>
#include <stdbool.h>

#define MAX_N 100
#define MAX_K 10

int arr[MAX_N], n, k, subset_sum[MAX_K];
bool visited[MAX_N];

bool divide_into_k_subsets(int subset, int start, int curr_sum) {
    if (subset_sum[subset] == curr_sum) {
        if (subset == k - 2)
            return true;
        return divide_into_k_subsets(subset + 1, 0, 0);
    }
    for (int i = start; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            subset_sum[subset] += arr[i];
            if (divide_into_k_subsets(subset, i + 1, curr_sum + arr[i]))
                return true;
            visited[i] = false;
            subset_sum[subset] -= arr[i];
        }
    }
    return false;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        scanf("%d", &k);
        if (k > n) {
            printf("False\n");
            continue;
        }
        int total_sum = 0;
        for (int i = 0; i < n; i++)
            total_sum += arr[i];
        if (total_sum % k != 0) {
            printf("False\n");
            continue;
        }
        for (int i = 0; i < n; i++)
            visited[i] = false;
        for (int i = 0; i < k; i++)
            subset_sum[i] = 0;
        bool possible = divide_into_k_subsets(0, 0, 0);

        if (possible)
            printf("True\n");
        else
            printf("False\n");
    }
    return 0;
}
