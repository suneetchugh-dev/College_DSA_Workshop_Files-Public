#include <iostream>
using namespace std;

int fact(int n)
{
    if(n<1)//writing base condition first
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main()
{
    cout << fact(5) << endl;
}