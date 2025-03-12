#include<bits/stdc++.h>
using namespace std;

int recursion_sum(int n)
{
    if(n==1) return 1;
    return recursion_sum(n-1)+n;
}

int main()
{
    int n;
    cin>>n;
    cout<<recursion_sum(n)<<endl;
    return 0;
}