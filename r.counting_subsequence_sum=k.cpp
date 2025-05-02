#include <bits/stdc++.h>
using namespace std;

int print_subseq(int i, int sum, int arr[], int n,int k)
{
    if(i>=n)
    {
        if(sum==k)
        {
            return 1;
        }
        return 0;
    }
    //Pick
    sum+=arr[i];
    int left = print_subseq(i+1,sum, arr,n,k);
    
    
    //Not pick
    sum-=arr[i];
   int right = print_subseq(i+1,sum, arr,n,k);
    
    return left+right;
    
    
}

int main() {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<print_subseq(0,0,arr,n,k);
        return 0;
}
