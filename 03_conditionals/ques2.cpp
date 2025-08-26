#include<iostream>
using namespace std;
int main(){
    int hours;
    cout<<"Enter Time Between (0 - 23)"<<endl;
    cin>>hours;
    if(hours >= 8 && hours <=18){
        cout<<"Tea Shop is OPEN!"<<endl;
    }else{
        cout<<"Tea Shop is CLOSE!";
    }
    return 0;
}