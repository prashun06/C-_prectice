#include <iostream>

using namespace std;

int main()
{
    int A[10]={2,4,5,6,8,9,10,16,17,55};
    int l=0,h=9,key,mid;
    cout<<"Input key";
    cin>>key;
    while (l<=h){
    mid=(l+h)/2;
    if(key==A[mid])
        {cout<< "find in "<<mid;
        return 0;}
    else if (key<A[mid])
        h=mid-1;
    else l=mid+1;
    }
    cout<<"the element is not here";
    return 0;
}
