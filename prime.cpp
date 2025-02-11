//Given number is prime or not

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> d;
    for(int i=1;i*i<=n;i++){

        if(n%i==0){
            d.push_back(i);

            if(i!=n/i){
               d.push_back(n/i);
            }
        }

            
    }
    if(d.size()==2){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
}

//prime number
//factors

// int main(){
//     int n;
//     cin>>n;
//     int count=0;
//     for(int i=1;i*i<=n;i++){

//         if(n%i==0){
//             d.push_back(i);
//             count++;
//             if(i!=n/i){
//                d.push_back(n/i);
//                count++;
//             }
//         }

            
//     }
//     if(count==2){
//         cout<<"It is a prime number"<<endl;
//     }
//     else{
//         cout<<"It is not a prime number"<<endl;
//     }
// }