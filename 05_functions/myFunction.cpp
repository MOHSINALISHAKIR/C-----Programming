#include<iostream>
#include<string>
using namespace std;
// function declaring 
void serveChai(int cups){
    cout<<"Serve "<<cups<<" of Chai"<<endl;
}
// types of parameters
// formal parameters
// actual parameters
// default parameters
void serveChai(string teaType = "masla tea"){
    cout<<"Serve "<<teaType<<" to customer"<<endl;
}
int main(){
    // function calling
    serveChai(4);
    serveChai();
    return 0;
}