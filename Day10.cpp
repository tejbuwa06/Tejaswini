#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Ener the year : ";
    cin>>year;
    if (year%4==0)
    {
        cout<<"The year is leap year.";
    }
    else{
         cout<<"The year is not leap year.";
    }

}