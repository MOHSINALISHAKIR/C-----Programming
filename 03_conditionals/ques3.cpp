#include<iostream>
using namespace std;
int main(){
    int numberCups ;
    float totalBill;
    float disCount;
    float price = 10;
    cout<<"Enter Numbers Of Cups"<<endl;
    cin>>numberCups;
    if(numberCups >=20){
        disCount = 0.20;
        
    }else if(numberCups >= 10 && numberCups <=20){
        disCount = 0.10;
    }else{
        disCount = 0;
    }
    cout<<"Before DisCount"<<endl;
    totalBill = numberCups * price ;
    cout<<totalBill<<endl;
    cout<<"After DisCount"<<endl;
    totalBill = totalBill - (totalBill * disCount);
    cout<<totalBill<<endl;

    
    return 0;
}