#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int low, int high, int target){
    if (low > high)
        return -1;
    int mid = (low + high)/2;
    if(target == arr[mid])
        return mid;
    else if (target > arr[mid])
        return binarySearch(arr, mid+1, high, target);
    else if (target < arr[mid])
        return binarySearch(arr, low, mid - 1, target);
    return 0;
}
int main() {
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << binarySearch(arr, 0, n-1, target);
    return 0;
}
