//Print the digits present in given number

#include <bits/stdc++.h>
using namespace std;
int last_digit;
int x,n;
cin>>n;
int main(){
    while(n!=0){
        last_digit=n%10;
        x=x*10+last_digit;
        n=n/10;
    }
    cout<<x<<endl;
}





// //int main(){
//     int n;
//     cin>>n;
//     int last_digit;
//     while(n!=0){
//         last_digit=n%10;
//         n=n/10;
//         cout<<last_digit;
//     }
    
// //}