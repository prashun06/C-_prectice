#include <iostream>

using namespace std;
class Rectangle
{
    public://need to public to access the main function
    int length;
    int breadth;
    int area()//area function
    {
        return length*breadth;
    }
    int perimeter()//perimeter function
    {
        return 2*(length+breadth);
    }
};//must add semicolon
int main()
{
    Rectangle *p=new Rectangle;
    p->length=10;
    p->breadth=12;
    cout <<p->area();
}


