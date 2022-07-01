#include <iostream>

using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public:
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
    Rectangle r;
r.setlength(-10);
r.setbreadth(5);
cout<<r.area()<<endl;
cout<<r.getbreadth()<<endl;
    return 0;
}


