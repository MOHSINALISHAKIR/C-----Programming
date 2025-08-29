#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    string name;
    string dept;

};
class Child : public Parent {
    public:
    double salary;
    Child(string name , string dept , double salary){
        this->name = name;
        this->dept = dept;
        this->salary = salary;

    }
    void getInfo (){
        cout<<"Name is  "<<name<<endl;
        cout<<"Dept is  "<<dept<<endl;
        cout<<"Salary is  "<<salary<<endl;
    }
};
int main(){
    Child c1("MOHSIN ALI SHAKRI","COMPUTER SCIENCE",45000);
    c1.getInfo();
    return 0;
}