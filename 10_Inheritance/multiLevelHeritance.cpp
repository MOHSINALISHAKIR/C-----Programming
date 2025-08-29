#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    string name;
    string dept;
};
class Child1 : public Parent{
    public:
    int rollNo;

};
class Child2 : public Child1{
    public:
    string rearchArea;

};
int main(){
    Child2 c1;
    c1.name="Usman";
    c1.dept="LLB";
    c1.rollNo = 1234;
    cout<<"Name\n"<<c1.name;
    
    return 0;
}