#include <iostream>
using namespace std;
int main(){
    int temp [5];
    for(int i = 0; i<5;i++){
        cout<<"Enter Array value" <<endl;
        cin>>temp[i];
    }
    cout<<"VALUES= ";
    for(int i= 0 ; i < 5 ; i++){
        cout<<"Array at"<<i<<" "<<temp[i]<<endl;

    }
    return 0;
}