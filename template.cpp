#include <iostream>

using namespace std;
template <class T>
T max(T a, T b, T c)
{
 if (a>b && a>c)
    return a;
 else if (b>c)
    return b;
 else return c;

}

int main()
{
    cout << max (2.5f,66.3f,3.6f);
    return 0;
}

