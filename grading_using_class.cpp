#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    string name;
    int math;
    int phy;
    int chem;
public:
    student (int r, string n,int m, int p,int c)
    {
        roll=r;
        name=n;
        math=m;
        phy=p;
        chem=c;
    }
    int total()
    {
        return math+phy+chem;
    }
    char grade()
    {
        double Avr=total()/3;
        if (Avr>60)
            return 'A';
        else if (Avr>40 && Avr<60)
            return 'B';
        else
            return 'C';
    }

};
int main()
{
    int r;
    string n;
    int m;
    int p;
    int c;
    cout << "Enter Roll";
    cin>>r;
    cout<<"Enter name";
    cin>> n;
    cout<<"Marks of math and phy and chem";
    cin>>m>>p>>c;
    student s(r,n,m,p,c);
    cout<<"total"<<s.total()<<endl;
    cout<<"grade"<<s.grade()<<endl;
}
