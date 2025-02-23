//Print the  second largest number (it may contain repeated number)

#include<bits/stdc++.h>
using namespace std;

class solution {
public:
    int secondLargestDigit(int num) {
        //Write your code here...
        int l1=-1,l2=-1;
        while(num!=0){
            int digit=num%10;
            if(digit>l1){
                l2=l1;
                l1=digit;
            }
            else if(digit>l2 && digit<l1){
                l2=digit;
            }
            num=num/10;
        }
        return l2;
    }

};

int main() {
    int num;
    cin >> num;
    
    int result = secondLargestDigit(num);
    cout << result << endl;
    return 0;
}
