#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float gpa;


    Student(string s,int r,float g){
        name=s;
        rno=r;
        gpa=g;
    }
};
int main(){
    Student s1("Ram",10,9.4);
    // s1.name="RAM";
    // s1.rno=12;
    // s1.gpa=9.3;

    cout<<s1.name<<endl;
    cout<<s1.rno<<endl;
    cout<<s1.gpa<<endl;
}
