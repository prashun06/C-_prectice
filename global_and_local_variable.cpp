#include <iostream>

using namespace std;
int g=0;//global variable
void fun()
{
    int a=5;//local variable
    {
        int g=5;//local
        g++;
        cout<<g<<endl;
    }
    g=g+a;
    cout<<g<<endl;
}
int main()

{
    int x=10;
    g=15;
    fun();//run the function fun
    g++;
    cout<<g<<endl;
    cout<<::g;//scopeing rule
     return 0;
}

