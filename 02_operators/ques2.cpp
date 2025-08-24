#include<iostream>
using namespace std;
int main(){
    int teaBag;
    cout<<"Enter TeaBags You Have "<<endl;
    cin>>teaBag;
    if(teaBag<=10){
        int finalBags = teaBag +=5;
        cout<<"Final Bags is =  "<<finalBags<<endl;
    }else{
        cout<<teaBag;
    }
    return 0;
}