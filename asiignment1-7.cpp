#include<iostream>
using namespace std;
class employee
{
    char name[30];
    int age;

public:
    void getdata();
    void putdata();
};

void employee :: getdata( )
{
cin>>name;
cin>>age;
}

void employee :: putdata ()
{
cout<<"name:- "<<name<<endl;
cout<<"age:- "<<age<<endl;
}

int main()
{
    employee manager[2];
    for(int i=0;i<2;i++)
    {
        manager[i].getdata();
    }

    cout<<"manager details"<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"manager no."<< i+1<<endl;
        manager[i].putdata();
    }

    employee worker[3];
    for(int i=0;i<3;i++)
    {
        worker[i].getdata();
    }

    cout<<"\nworkers details"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"worker no."<< i+1<<endl;
        worker[i].putdata();
    }
return 0;
}
    //Nishant Ranjan
    //CSE
    //2001066