#include<iostream>
#include<string>
using namespace std;
class Teacher {
    public:
    string name;

    int age ;
    Teacher(string name , int age){
        this->name=name;
        this->age=age;
    }
    void getInfo(){
        cout<<"Name \n"<<name<<endl;
        cout<<"age  "<<age<<endl;
    }
    ~Teacher(){
        cout<<"this is destructor"<<endl;
    }
};
int main(){
    Teacher t1("Mohsin",21);
    t1.getInfo();
    return 0;
}