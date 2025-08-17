#include <stdio.h>
#include <stdbool.h>
void findAllDuplicates(int arr[], int n) {
    bool seen[n + 1];
    for (int i = 0; i <= n; i++) seen[i] = false;

    for (int i = 0; i < n; i++) {
        if (seen[arr[i]])
            printf("Duplicate: %d\n", arr[i]);
        else
            seen[arr[i]] = true;
    }
}
int main() {
    int arr[] = {3,1,3,4,2,2,1,5,7,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    findAllDuplicates(arr, n);
    return 0;
}
