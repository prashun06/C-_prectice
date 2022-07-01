#include <iostream>

using namespace std;


int main()
{
    int a,b,c,option;
    cout <<"1.Add\n"<<"2.Sub\n";
    cout << "Enter the choice ";
    cin >>option;
    cout <<"Enter Two Number ";
    cin >>a >>b;
    switch (option)
    {case 1: c=a+b;
    break;
    case 2: c=a-b;
    break;
    }
    cout << "The reasult is "<<c;
    return 0;
    }
