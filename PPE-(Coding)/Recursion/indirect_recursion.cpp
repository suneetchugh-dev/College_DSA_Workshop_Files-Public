//in indirect recursion one function calls another function to get get called back inside it's code block again
//function A calls B then B again Calls A;
#include <iostream>
using namespace std;

void funB(int n);

void funA(int n)
{
    if(n>0)
    {
        cout << n;
    }
    funB(n-1);
}

void funB(int n)
{
    if(n>0)
    {
        cout << n;
        funA(n/2);
    }
}


int main()
{
    funA(5);
}