#include<iostream>
#include<string>
using namespace std;
class student {
    private:
    string name;
    int age;
    public:
    void getStd(){
        cout<<"Enter Student Name "<<endl;
        getline(cin,name);
        cout<<"Enter Age "<<endl;
        cin>>age;
    }
    void printStd(){
        cout<<"Student Information "<<endl;
        cout<<"Name " <<name<<"Age " <<age<<endl;
    }
};

int main(){
    student s1;
    s1.getStd();
    s1.printStd();
    return 0;
}