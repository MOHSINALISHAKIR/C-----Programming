#include<iostream>
#include<string>
using namespace std;


class date {
    private:
     int year,date,month;
    public:

    void getDate(){
        cout<<"Enter Year "<<endl;
        cin>>year;
        cout<<"Enter Month "<<endl;
        cin>>month;
        cout<<"Enter Date "<<endl;
        cin>>date;
    }
    void printDate(){
        cout<<"Date is : "<<endl;
        cout<<date<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){
    date d1;
    d1.getDate();
    d1.printDate();
    return 0;
}