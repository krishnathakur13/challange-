#include <stdio.h>
void find_zero_sum_subarrays(int arr[], int n) {
    int current_sum;
    printf("Subarrays with zero sum:\n");
    for (int i = 0; i < n; i++) {
        current_sum = 0;
        for (int j = i; j < n; j++) {
            current_sum += arr[j];
            if (current_sum == 0) {
                printf(" %d,\t %d\n", i, j);
            }
        }
    }
}
int main() {
    int arr[] = {1, 2, -3, 3, -1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    find_zero_sum_subarrays(arr, n);

    return 0;
}
