#include <iostream>
using namespace std;

void fun(int n)
{
    if(n>=1)
    {
        //two recursive calls working in parallel
        fun(n-1);
        cout << n;  
        fun(n-1);
    }
}

int main()
{
    fun(3);
}