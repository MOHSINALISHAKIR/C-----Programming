// pass by value 
#include<iostream>
using namespace std;
void teaServed (int cups){
    cups = cups + 5;
    cout<<"Total "<<cups<< " Served"<<endl;


}
int main(){
    int teaCups = 3;
    // call by value
    teaServed(teaCups);
    cout<<"Tea Served" <<teaCups <<endl;
    return 0;
}