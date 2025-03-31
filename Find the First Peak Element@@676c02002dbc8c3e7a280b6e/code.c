#include<stdio.h>

int findPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && (i == n - 1 || arr[i] > arr[i + 1])) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findPeak(arr, n);
    printf("%d", peak);

    return 0;
}
