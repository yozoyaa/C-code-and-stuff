#include <stdio.h>

void miniMaxSum(int arr[], int n) {
    long long totalSum = 0;
    long long minSum = 0;
    long long maxSum = 0;
    
    long long minElement = arr[0], maxElement = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] < minElement) minElement = arr[i];
        if (arr[i] > maxElement) maxElement = arr[i];
        totalSum += arr[i];
    }
    
    minSum = totalSum - maxElement;
    maxSum = totalSum - minElement;

    printf("%lld %lld\n", minSum, maxSum);
}

int main() {
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    miniMaxSum(arr, 5);
    
    return 0;
}
