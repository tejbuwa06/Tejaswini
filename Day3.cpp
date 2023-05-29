#include<iostream>
using namespace std;
int main(){
int days;
int year;
int week;
int month;
int rd;
int rrd;
int rrrd;

    cout<<"Enter the number of days: ";
    cin>>days;
    year = days/365;
    rd = days%365;
    month = rd/30;
    rd= rd%30;
    week= rd/7;
    rd = rd%7;

    cout<<year<<"year"<<month<<"month"<<week<<"week"<<rd<<"days";

    
    
    
    }