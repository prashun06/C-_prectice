#include <iostream>
using namespace std;

class Base
{
public:
    virtual  ~Base ()
    {
        cout<<"Destructor of Base"<<endl;
    }
};

class derived: public Base
{
public:
    ~derived()
    {
        cout<<"Destractor of derived"<<endl;
    }
};
void fun()
{
    Base *p=new derived();
    delete p;
}
int main()
{
    fun();
}
