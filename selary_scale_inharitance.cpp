#include <iostream>
using namespace std;
class Employee
{
private:
    int eid;
    string name;
public:
    Employee(int e, string n)
    {
        eid=e;
        name=n;
    }
    int getemployeeID(){return eid;}
    string getname(){return name;}
};
class Fulltimeemp : public Employee
{
private:
    int salary;
public:
    Fulltimeemp(int e,string n,int s):Employee(e,n)
    {
        salary=s;
    }
    int getFulltimeemp(){return salary;}

};
class Parttimeemp : public Employee
{
private:
    int wage;
public:
    Parttimeemp(int e,string n, int w): Employee(e,n)
    {
        wage=w;
    }
    int getparttimeemp(){return wage;}
};
int main()
{
    Fulltimeemp p1(1,"Jone ", 200);
    Parttimeemp p2(2, "Prashun", 5000);
    cout<<"ID: "<<p1.getemployeeID()<<". The salary of "<<p1.getname()<<"which is full time is "<<p1.getFulltimeemp()<<endl;
    cout<<"ID: "<<p2.getemployeeID()<<". The salary of "<<p2.getname()<<"which is part time is "<<p2.getparttimeemp()<<endl;
}
