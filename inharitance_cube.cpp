#include <iostream>
using namespace std;
class rect
{
private:
    int length;
    int breadth;
public:
    rect(){length=1, breadth=1;};
    rect(int l, int b){length=l,breadth=b;};
    int getlength(){return length;}
    int getbreadth(){return breadth;}
    void setlength(int l) {length = l;}
    void setbreadth(int b){breadth = b;}

};
class cube:public rect
{
private:
    int height;
public:
    cube(int h)
    {
        height=h;
    }
    int getheight(){return height;}
    int setheight(int h) {height = h;}
    int volume (){return getlength()*getbreadth()*height;}


};

int main()
{
   cube c(5);
   c.setlength(7);
   c.setbreadth (10);
   cout<<c.volume()<<endl;

}
