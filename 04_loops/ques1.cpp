#include<iostream>
using namespace std;
int main(){
    int numberCups ;
    cout<<"Enter Numbers of Cups : "<<endl;
    cin>>numberCups;
    while(numberCups>0){
        numberCups --;
        cout<<"Remaining Cups of Tea to Served "<<numberCups<<endl;
    }
    return 0;
}