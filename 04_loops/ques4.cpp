#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;

    
    while (true)
    {
        cout<<"Do u want more (stop) to no"<<endl;
        getline(cin,response);
        if(response == "stop"){
            break;
        }
        cout<<"tea served"<<endl;
        
    }
    
    return 0;
}