#include <iostream>

using namespace std;
float max(int a,int b,int c)
{
 if (a>b && a>c)
    return a;
 else if (b>c)
    return b;
 else return c;

}

int main()
{
    int x=10,y=15,z=5,r;
    r=max(x,y,z);
    cout <<r;
    return 0;
}

