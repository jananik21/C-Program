#include <stdio.h>

int maxThievesCaught(char arr[], int n, int k) {
    int i, j, count = 0;
    for(i=0; i<n; i++) {
        if(arr[i] == 'P') {
            for(j=i+1; j<=i+k && j<n; j++) {
                if(arr[j] == 'T') {
                    count++;
                    arr[j] = 'C';
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    char arr[100];
    int i,N;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = sizeof(arr) / sizeof(arr[0]);
    int k;
    scanf("%d",&k);
    printf("Maximum number of thieves caught: %d\n", maxThievesCaught(arr, num, k));
    return 0;
}
