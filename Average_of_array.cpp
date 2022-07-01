#include <iostream>

using namespace std;

int main()
{
   int z,n,av,sum=0;
   int A[10];
   cout <<"Enter the numbers of element ";
   cin>>n;
   cout<<endl;
   for (z=1;z<=n;z++)//taking the element
   {
       cout<<z<<". Enter the number:  ";
       cin>>A[z];
       cout<<endl;
       sum=sum+A[z];
   }
    av=sum/n;
   cout<<"Average = "<<av;
    return 0;
}
