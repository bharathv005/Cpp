#include <bits/stdc++.h>
using namespace std;

bool print_subseq(int i, vector<int> &v, int sum, int arr[], int n,int k)
{
    if(i>=n)
    {
        if(sum==k)
        {
            for(auto x:v)
            cout<<x<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    //Pick
    v.push_back(arr[i]);
    sum+=arr[i];
    if(print_subseq(i+1,v,sum, arr,n,k)==true) return true;
    
    
    //Not pick
    v.pop_back();
    sum-=arr[i];
    if(print_subseq(i+1,v,sum, arr,n,k)==true) return true;
    
    return false;
    
    
}

int main() {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> v;
        print_subseq(0,v,0,arr,n,k);
        return 0;
}
