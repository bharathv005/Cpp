#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(int arr[], int n, int k)
{
    long long sum=0;
    int max=0;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==k)
        {
            max=i+1;
        }
        if(m.find(sum-k)!=m.end())
        {
            int len = i - m[sum-k];
            if(len>max)
            {
                max=len;
            }
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
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