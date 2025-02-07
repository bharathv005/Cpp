//Printing all the divisors of given number

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"The divisors of "<<n<<" are:"<<endl;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
            cout<<n/i<<endl;
        }
    }
}
