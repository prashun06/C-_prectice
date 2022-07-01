#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ofstream ofs ("My.txt");
    ofs<<"Jone"<<endl;
    ofs<<25<<endl;
    ofs<<"cs"<<endl;
    ofs.close();

}
