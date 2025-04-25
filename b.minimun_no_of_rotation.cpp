#include <bits/stdc++.h>
using namespace std;

int minimum(int arr[], int n)
{
    int low=0, high = n-1;
    int ans=INT_MAX;
    int ans_index = -1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<ans)
            {
                ans=arr[low];
                ans_index=low;
            }
            low=mid+1;
        }
        else if(arr[mid]<=arr[high])
        {
            if(arr[mid]<ans)
            {
                ans=arr[mid];
                ans_index=mid;
            }
            high = mid-1;
        }
    }
    return ans_index;
}

int main() {
    int n;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << minimum(arr,n);
    return 0;
}
