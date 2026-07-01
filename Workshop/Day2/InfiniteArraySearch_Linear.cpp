//Q1 => Given a sorted array of infinite length find the index of a given eleemnt in that array if exist..

//Approach By Me => Keep running the loop while the key is not found within the array assuming array to be infinite

#include <iostream>
using namespace std;

int infiniteBinarySearch(int arr[], int key)
{
    int i=0;
    while(key!=arr[i])
    {
        if(arr[i]>key) //since the array is sorted
        {
            return -1;
        }
        i++;
    }
    return i;
}

int main()
{
    int arr[] = {20,40,60,80};
    int index = infiniteBinarySearch(arr, 10);
    if (index==-1)
    {
        cout << "Element Not Found In The Array";
    }
    else
    {
        cout << "Index of the element present in array is " << index;
    }
}