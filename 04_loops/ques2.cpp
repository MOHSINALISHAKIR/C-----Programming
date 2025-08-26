#include<iostream>
#include<string>

using namespace std;
int main(){
    string choice;
    int num;
    do
    {
        cout<<"Do You want more Tea (no) to stop "<<endl;
        getline(cin,choice);
    } while (choice != "no");
    cout<<"By! Take Care";
    

    return 0;
}