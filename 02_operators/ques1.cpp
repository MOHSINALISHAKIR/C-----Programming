#include<iostream>
using namespace std;
int main(){
    int totalPrice,numberCups,pricePerCup;
    int amount = 600;
    
    cout<<"Enter Numbers of Cups "<<endl;
    cin>>numberCups;
    cout<<"Enter Price of  One Cup "<<endl;
    cin>>pricePerCup;
     totalPrice = numberCups*pricePerCup;
     cout<<"total = "<<totalPrice;
     if(totalPrice >= 500){
       float disCount = totalPrice * (5.0 / 100); 

        int finalPrice = totalPrice-disCount;
        cout<<"After Discount =  "<<finalPrice<<endl;
     }else{
        cout<<"NO DISCOUNT AT THIS PRICE"<<endl;
        cout<<totalPrice;
     }
    

    return 0;
}