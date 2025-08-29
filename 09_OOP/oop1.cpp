#include<iostream>
#include<string>
using namespace std;
class Parent{
    public :
    string name;
    int age;

};
class Child : public Parent{
    public:
    int rollNo;

    Child(string name , int age , int rollNo){
        this->name=name;
        this->age=age;
        this->rollNo=rollNo;

    }
    void getInfo(){
        cout<<"Student Name and Age is "<<name<<age<<endl;
        
        cout<<"Student RollNO "<<rollNo<<endl;
    }
};




int main(){
    Child s1("mohsin",21,1234);
    s1.getInfo();
    return 0;
}