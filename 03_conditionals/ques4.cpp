#include<iostream>
#include<string>
using namespace std;
int main(){
    int teaType;
    float price;
    cout<<"Enter 1 For Green Tea "<<endl;
    cout<<"Enter 2 For Black Tea "<<endl;
    cout<<"Enter 3 For Lemon Tea "<<endl;
    cout<<"Select Number Below"<<endl<<endl;
    cin>>teaType;
    switch (teaType)
    {
    case 1:
        price = 2.0;
        cout<<"You Select Green Tea : Price is "<<price<<endl;
        break;
    case 2:
        price = 3.0;
        cout<<"You Select Black Tea : price is "<<price<<endl;
        break;
    case 3:
        price = 4.0;
        cout<<"You Select Lemin Tea : Price is "<<price<<endl;
        break;        
    
    default:
        cout<<"Choice Right Number::"<<endl;
        break;
    }
   

    return 0;
}