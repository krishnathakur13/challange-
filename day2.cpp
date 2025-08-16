#include <iostream>
using namespace std;
int findnum(int arr[], int n) {
    int total = n * (n + 1) / 2;       
    int sumarray = 0;
    for(int i = 0; i < n - 1; i++)
        sumarray += arr[i];
    return total - sumarray;             
}
int main() {
    int arr[] = {1, 2, 4, 5};
    int n = 5;                        
    cout << "Missing number is :" << findnum(arr, n) << endl;
    return 0;
}
