//Find the gcd of given numbers

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     while(a!=0 and b!=0){
//         if(a>=b){
//             a=a%b;
//         }
//         else{
//             b=b%a;
//         }
//     }
//     if(a==0){
//         cout<<b;
//     }
//     else{
//         cout<<a;
//     }
// }


//Brute force

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,gcd=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
}