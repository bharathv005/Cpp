#include <bits/stdc++.h>
using namespace std;

int number_bouquet(int arr[], int n, int k, int mid)
{
    int count = 0, bouquet = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] <= mid)
        {
            count++;
            if( count == k)
            {
                bouquet++;
                count = 0;
            }
        }
    else count = 0;
    }
    return bouquet;
}
            
int bouquet_formation(int arr[], int n, int k, int m)
{
    if( m*k > n) return -1;
    int low = *min_element(arr, arr+n);
    int high = *max_element(arr, arr+n);
    int ans = high;
    while( low <= high)
    {
        int mid = (low + high)/2;
        if( number_bouquet (arr, n, k, mid) >= m)
        {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    return ans;
}

int main()
{
    int n, k,m;
    cin >> n >> k>>m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << bouquet_formation(arr,n,k,m);
    return 0;
}
