//Print the digits present in given number

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int last_digit;
    while(n!=0){
        last_digit=n%10;
        n=n/10;
        cout<<last_digit;
        count+=1;
    }
    cout<<endl;
    cout<<count<<endl;
    
}

//Print the digits present in given number
//palindrome number
//Print the reverse in given number
