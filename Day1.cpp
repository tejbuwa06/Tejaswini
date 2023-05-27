#include<iostream>
using namespace std;
int main(){
int num1,num2;
char opr;
cout<<"Enter the number 1 : ";
cin>>num1;
cout<<"Enter the number 2 : ";
cin>>num2;
cout<<"Enter the operator : ";
cin>>opr;

 switch (opr)
 {
 case '+':
   cout<<"The sum is: "<<num1+num2<<endl;
    break;

 case '-':
   cout<<"The subtraction is: "<<num1-num2<<endl;
    break;

 case '/':
   cout<<"The division is :  "<<num1/num2<<endl;
    break;

 case '*':
   cout<<"The multiplication is : "<<num1*num2<<endl;
    break;

 case '%':
   cout<<"The modulus is : "<<num1%num2<<endl;
    break;


 
 default:
 cout<<"Please enter valid statement : "<<endl;
    break;
 }




}