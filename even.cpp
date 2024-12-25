#include<iostream>
#include<conio>
#include<math>
using namespace std;
class radius
{    
    public:
    float r,pi=3.14,area;
    void getdata()
    {
        cout<<"enter the value of radius:"<<endl;
        cin>>r;
    }
    void putdata()
    {
        area=pi*r*r;
        cout<<"area of circle:"<<area<<endl;
    }
};
int main()
{
radius r;
r.getdata();
r.putdata();
return 0;
}
