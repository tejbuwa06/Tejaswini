#include<iostream>
using namespace std;
int main(){
char name[40];
int roll_no;
int marks;
long int total;
float average,per;
int p;
int c;
int b; 
int m;
int s;


cout<<"Name"<<"      "<<"Roll_no   "<<endl;
cout<<"Tej"<<"       "<<"13"<<"     "<<endl;

cout<<"Enter the marks of Physics : "<<endl;
cin>>p;
 
cout<<"Enter the marks of Chemistry: "<<endl;
cin>>c;

cout<<"Enter the marks of Maths: "<<endl;
cin>>m;

cout<<"Enter the marks of Biology: "<<endl;
cin>>b;

cout<<"Enter the marks of Sanskrit: "<<endl;
cin>>s;

total=p+c+m+b+s;
average=(p+c+m+b+s)/5;
cout<<"The total is :  "<<total<<endl;
cout<<"The average is : "<<average<<endl;
per=(total*100)/500;
cout<<"The percentage is: "<<per<<endl;
return 0;


}