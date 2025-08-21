#include <stdio.h>
int trap(int* height, int n) {
    if (n <= 2) {
        return 0;
    }
    int leftmax[n];
    int right_max[n];
    int total_water = 0;
    leftmax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftmax[i] = (height[i] > leftmax[i - 1]) ? height[i] : leftmax[i - 1];
    }
    right_max[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = (height[i] > right_max[i + 1]) ? height[i] : right_max[i + 1];
    }
    for (int i = 1; i < n - 1; i++) {
        int water_level = (leftmax[i] < right_max[i]) ? leftmax[i] : right_max[i];
        int trapped = water_level - height[i];
        if (trapped > 0) {
            total_water += trapped;
        }
    }
    return total_water;
}
int main() {
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(height) / sizeof(height[0]);
    int result = trap(height, n);
    printf(" %d\n", result);
    return 0;
}
