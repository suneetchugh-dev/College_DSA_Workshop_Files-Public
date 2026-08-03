#include <iostream>
using namespace std;


int fun(int n)
{
    if(n>=1)
    {
        cout << n << endl;
        fun(n-1); // Tail recursion, we are calling the function at the end of the function
    }
    return 0;
}

int main()
{
    int n = 5; // Example value
    fun(n);
    return 0;
}