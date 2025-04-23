#include <bits/stdc++.h>
using namespace std;
int search_rotated_sorted(int arr[], int n, int x)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[low]<=arr[mid])
        {
            if(arr[low]<=x && x<=arr[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else if(arr[mid]<=arr[high])
        {
            if(arr[mid]<=x && x<=arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<search_rotated_sorted(arr,n,x);
    return 0;
}
