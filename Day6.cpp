#include<iostream>
#include<math.h>
using namespace std;

int main(){

float x1 ,x2, y1 ,y2,d;
cout<<"Enter the 4 coordinates :  "<<endl;
cin>>x1>>x2>>y1>>y2;

d=sqrt(pow((x2-x1),2) + (pow((y2-y1),2)));
cout<<"The answer is : "<<d<<endl;



}