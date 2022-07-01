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
    Rectangle r1,r2;//r1 r2 .....two Rectangle
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;
    return 0;
}


