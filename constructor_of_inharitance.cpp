#include <iostream>
using namespace std;
class base
{
public:
    base(){cout<<"Non pera"<<endl;}
    base(int x) {cout<<"pera"<<x<<endl;}
};
class derive:public base
{
public:
    derive(){cout<<"non pere derive"<<endl;}
    derive(int y){cout<<"pere derive"<<y<<endl;}
    derive(int x, int y):base(x)
    {cout<<"pere derive"<<y<<endl;}

};


int main()
{
     derive d (4,7);
}
