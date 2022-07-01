#include <iostream>

using namespace std;
void pass (int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main ()
{
    int x=10,y=20;
    pass(&x,&y);
    cout<<x<<" "<<y;

    return 0;
}

