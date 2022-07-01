#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int i,num,A[10]={2,4,7,5,3,1,8,9};
    cout << "Enter the number ";
    cin>>num;
    for(i=0;i<10;i++)
    {
    if(num==A[i])
       {cout <<"the number is "<<num;
       return 0;}
        }
        cout << "this number is unknown";
        return 0;
}
