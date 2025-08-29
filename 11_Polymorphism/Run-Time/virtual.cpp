#include<iostream>
#include<string>
using namespace std;
class Parent {
    public:
    virtual void hello(){
        cout<<"hello from parent class"<<endl;
    }
};
class Child : public Parent{
    public:
    void hello(){
        cout<<"hello from child class"<<endl;
    }

};
int main(){
    Child c1;
    c1.hello();
    return 0;

}