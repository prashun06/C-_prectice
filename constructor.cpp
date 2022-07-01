#include <iostream>

using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
        Rectangle(int l=1,int b=1)//initial constructor
        {
            setlength(l);
            setbreadth(b);
        }
        Rectangle(Rectangle &r)//copy constructor
        {
            length=r.length;
            breadth=r.breadth;
        }
    void setlength(int l)//setting the length
    {
        if (l<0)
            length=-l;
        else length=l;
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
int area(){
return length*breadth;
}

};//must add semicolon
int main()
{
    Rectangle r(10,5);
    Rectangle r2(r);

cout<<r2.area()<<endl;

    return 0;
}


