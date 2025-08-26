#include<iostream>
#include<string>
using namespace std;
int main(){
    string order;
    cout<<"Enter Your Order Green Tea Or Else "<<endl;
    getline(cin,order);
    if(order == "Green Tea"){
        cout<<"Your Order Green Tea ok "<<endl;

    }else{
    cout<<"Your Order  "<<order<<endl;


    }

    return 0;

}