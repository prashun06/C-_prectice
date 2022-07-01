#include <iostream>
using namespace std;

class complex
{
p :
    int real;
    int img;
    complex operator+ (complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

};
}
