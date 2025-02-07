//palindrome number

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,last_digit;
    int x=0;
    cin>>n;
    int m=n;
    while(n!=0){
        last_digit=n%10;
        x=x*10+last_digit;
        n=n/10;
    }
    cout<<x<<endl;
    if(x==m){
        cout<<x<<" "<<"is a palindrome number"<<endl;
    }
    else{
        cout<<x<<" "<<"is not a palindrome number"<<endl;
    }
}

//Print the digits present in given number
//palindrome number
//Print the reverse in given number
