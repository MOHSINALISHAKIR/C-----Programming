#include<iostream>
#include<string>
using namespace std;
int main(){
    string role ;
    int numberCups;
    cout<<"Enter Your Role"<<endl;
    cin>>role;
    cout<<"Enter Numbers of Cups"<<endl;
    cin>>numberCups;
    if(role == "student" && numberCups >=15 ){
        
        cout<<"Congratulations U Win 15 % discount"<<endl;

    }else if(numberCups >=15){
        cout<<"Congratulations U Win 10% discount"<<endl;

    }else{
        cout<<"Sorry!";
    }
    return 0;
    
}