#include <iostream>
using namespace std;
void SortArr(int arr[], int n) {
    int low = 0, mid = 0, high = n -1;
    while(mid <= high) {
        if(arr[mid] == 0) {
            int temp = arr[low];//swap number
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++; mid++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            int temp = arr[mid];//swap number
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }
}
int main() {
    int arr[] = {0,1,2,1,0,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    SortArr(arr, n);
    
    for(int i=0; i<n; i++)
        cout << arr[i] << "\t";
    cout << endl;
    
    return 0;
}
