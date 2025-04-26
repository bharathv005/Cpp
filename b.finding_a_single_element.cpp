#include <bits/stdc++.h>
using namespace std;
int findsingleelement(int arr[], int n){
    if(n==1)
        return arr[0];
    if(arr[0] != arr[1])
        return arr[0];
    if(arr[n-1] != arr[n-2])
        return arr[n-1];
    int low = 1;
    int high = n-2;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        if((mid%2 == 1 and arr[mid] == arr[mid-1]) or (mid%2 == 0 and arr[mid] == arr[mid+1])){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << findsingleelement(arr,n);
    return 0;
}
