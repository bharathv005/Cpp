#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(int arr[], int n, int k)
{
    int max=0;
    int i=0,j=0;
    long long sum=arr[0];
    while(j<n)
    {
        if(sum==k)
        {
            if(j-i+1>max)
            {
                max=j-i+1;
            }
            j++;
            if(j<n)
            {
                sum+=arr[j];
            }
        }
        else if(sum<k)
        {
            j++;
            if(j<n)
            {
                sum+=arr[j];
            }
        }
        else if(sum>k)
        {
            if(i==j)
            {
                i++;
                j++;
                if(j<n)
                {
                    sum=arr[j];
                }
            }
            else
            {
                sum-=arr[i];
                i++;
            }
        }
    }
    
    return max;
}
int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<longestSubarrayWithSumK(arr,n,k);
    return 0;
}