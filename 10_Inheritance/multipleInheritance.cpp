#include<iostream>
#include<string>
using namespace std;

class Teacher {
    public:
    string name;

};
class Student {
    public:
    string dept;

};
class Intern : public Teacher , public Student{
    public:
    int id;

    Intern(string name , string dept , int id){
        this->name=name;
        this->dept=dept;
        this->id=id;
    }
    void getInfo(){
        cout<<"Name "<<name<<endl;
        cout<<"Dept "<<dept<<endl;
        cout<<"Id "<<id<<endl;
    }

};

int main(){
    Intern c1("MOHSIN","CS",9001);
    c1.getInfo();
    return 0;
}