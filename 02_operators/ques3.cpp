#include<iostream>
using namespace std;
int main(){
    int numberTeas ;
    cout<<"Enter the Number of Cups "<<endl;
    cin>>numberTeas;
    if(numberTeas>=20){
        cout<<"Congratulations - U Earned Gold Card"<<endl;
    }else{
        cout<<"Sorry! U Earned Silver Card";
    }
    return 0;
}