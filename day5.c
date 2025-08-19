#include <stdio.h>
void findleader(int arr[], int size) {
    if (size <= 0) {
        return;
    }
    int leaders[size];
    int leader_count = 0;
    int max_so_far = arr[size - 1];
    leaders[leader_count++] = max_so_far;
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > max_so_far) {
            max_so_far = arr[i];
            leaders[leader_count++] = max_so_far;
        }
    }
    printf("Leaders in the array are: ");
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findleader(arr, n);
    return 0;
}
