#include<iostream>
using namespace std;
class addition
{
    int a,b,c;
    public:
    void accept()
    {
        cout<<"enter the value of a:"<<endl;
        cin>>a;
        cout<<"enter the value of b:"<<endl;
        cin>>b;
    }
    void display()
    {
        c=a+b;
        cout<<"addition of two numbers:"<<c<<endl;
    }
};
int main()
{
    addition a;
    a.accept();
    a.display();
    return 0;
}