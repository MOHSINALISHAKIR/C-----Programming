#include<iostream>
#include<string>
using namespace std;
// constructor overloading
class Poly {
 public:
 string name;
 string dept;
 int salary;
 char grade;
 Poly(){
    cout<<"Constructor inside Poly Class";
 }
 Poly(string name , string dept ){
    this->name=name;
    this->dept=dept;
 }
 Poly(double salary , char grade){
    this->salary=salary;
    this->grade=grade;
 }
 void getInfo(){
    cout<<"Name ="<<name<<endl;
    cout<<"Dept ="<<dept<<endl;
 }
 void getInfo1(){
    cout<<"Salary ="<<salary<<endl;
    cout<<"Grade = "<<grade<<endl;
 }
};
class Print {
public:

void show(int x){
    cout<<"Int x = "<<x<<endl;
}
void show(char ch){
    cout<<"Char ch = "<<ch<<endl;
}
};
int main(){
    // Poly c1("Mohsin","cs");
    // Poly c2(40000,'A');
    // c1.getInfo();
    // c2.getInfo1();
    Print obj1;
    obj1.show(2);
    obj1.show('a');

    return 0;
}