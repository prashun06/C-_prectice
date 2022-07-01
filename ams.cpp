#include <iostream>

using namespace std;


int main()
{
 int i,n,m,sum=0;
 cout<<"Enter a number ";
 cin>>n;
 m=n;
while(n!=0){
    i=n%10;
    n=n/10;
    sum=sum*10+i;
}
cout<<sum;
if(m==sum) cout<<"this is same ";
else cout<<"ths is not";
    return 0;
    }
