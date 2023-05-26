#include<iostream>
using namespace std;
class group
{
    private: 
             int roll,year,mark,n;
             char name[30];

    public:  
             void setData()
             {
                cout<<"Enter Number of Student:";
                cin>>n;
                cout<<"Enter Student Details:"<<endl;
                for(int i=1;i<=n;i++)
                {
                 cout<<"Enter Student "<<i<<" Details:"<<endl;  
                 cout<<"Enter Roll No.,Name,marks,Year:";
                 cin>>roll>>name>>mark>>year;
                }
             }
             void showData()
             {
                cout<<"Grup Details Are:"<<endl;
                for(int i=1;i<=n;i++)
                {
                cout<<"Student Details "<<i<<" :";}
                cout<<" Roll no.:"<<roll<<"\t\tName:"<<name<<"\t\tMarks:"<<mark<<"\tYear:"<<year<<endl;
                
             }
};
int main()
{
    group g1;
    g1.setData();
    g1.showData();

    return 0;
}