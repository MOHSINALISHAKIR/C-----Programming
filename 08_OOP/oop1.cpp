#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    string name,dept;
    double salary;
    teacher(){
        cout<<"this is teacher class constructor";
    }
    teacher(string name , string dept , double salary){
        this->name=name;
        this->dept=dept;
        this->salary=salary;

    }
    void getInfo (){
        cout<<"Name  " << name<<endl;
        cout<<"Dept  " << dept<<endl;
        cout<<"Salary  "<< salary<<endl;
    }

};
int main(){
    teacher t1("Mohsin Ali Shakir","CS",40000);
    teacher t2(t1);
    t2.getInfo();
    // t1.getInfo();
    return 0;
}