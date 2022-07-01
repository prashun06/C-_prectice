#include <iostream>

using namespace std;


int main()
{
 int i,n,j,m,sum=0,sum1;
 cout<<"Enter a number ";
 cin>>n;
 m=n;
while(n!=0){
    i=n%10;//take out the number
    n=n/10;
    sum=sum*10+i;
}
sum1=sum;
while(sum1!=0){
    j=sum%10;
    sum1=sum1*10+i;
    sum=sum/10;

}
cout<<sum1;


    return 0;
    }
