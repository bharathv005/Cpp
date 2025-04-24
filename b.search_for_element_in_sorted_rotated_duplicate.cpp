#include <bits/stdc++.h>
using namespace std;
bool search_rotated_sorted_II(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    while (low <= high ) {
        int mid = ( low + high ) / 2;
        if ( arr[mid] == x ) {
            return true;
        }
        if ( arr[low] == arr[mid] && arr[mid] == arr[high] ) {
            low = low + 1;
            high = high - 1;
        }
        else if ( arr[low] <= arr[mid] ) {
            if ( arr[low] <= x && x <= arr[mid] ) {
                high = mid-1;
            }
            else {
                low = mid + 1;
            }
        }
        else if ( arr[mid] <= arr[high] ) {
            if ( arr[mid] <= x && x <= arr[high] ) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return false;
}
int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << search_rotated_sorted_II(arr, n, x);
    return 0;
}
