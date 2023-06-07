#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter the character : ";
    cin>>c;
    if ((c>='A' && c<='Z')||(c>='a' && c<='z')){
        cout<<"It is a character"<<endl;
    }
    else if(c>='0'&& c<='9' ){
         cout<<"It is a number"<<endl;
    }
    else{
        cout<<"It ia a special character"<<endl;
    }
    return 0;
}