// pass by reference
#include<iostream>
using namespace std;
void chaiMake (int  &cups ){
    cups = cups + 5;
    cout<<"Total Numbers Of Cups Make "<<cups<<endl;
}
int main(){
    int cups = 4;
    // pass by reference
    chaiMake(cups);
    cout<<"Inside Main Total Cups "<<cups<<endl;

    return 0;
}