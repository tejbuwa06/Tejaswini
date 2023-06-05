#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n%5==0 && n%11==0){
        cout<<"The number"<<n<<"is totally divided by 5 and 11 ";
    }
    else{
        cout<<"Invalid no.";
    }
}