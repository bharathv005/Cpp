#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;

};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main(){
    Car c1;
    c1.name="GLS mercedes";
    c1.price=6000000;
    c1.seats=5;
    c1.type="SUV";
    
    Car c2;
    c2.price=5000000;
    c2.name="Forturner";
    c2.seats=5;
    c2.type="SUV";

    print(c1);
}