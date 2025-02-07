//Printing all the divisors of given number

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> d; 
    cout<<"The divisors of "<<n<<" are:"<<endl;
    for(int i=1;i*i<=n;i++){

        if(n%i==0){
            d.push_back(i);

            if(i!=n/i){
               d.push_back(n/i);
            }
        }

            
    }
        sort(d.begin(),d.end());
        for(auto j:d){
            cout<<j<<endl;
        }

}
