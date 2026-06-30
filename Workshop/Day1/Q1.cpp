// Q1 find the last occurence of an element in an array

#include <iostream>
using namespace std;

void firstOccurence(int key, int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            cout << "The Last Occurence is at index " << i;
            return;
        }
        else
        {
            cout << "The Element doesn't exist in the array";
        }
    }
}

void lastOccurence(int key, int arr[], int n)
{
    for(int i=n-1; i>0; i--)
    {
        if(arr[i] == key)
        {
            cout << "The Last Occurence is at index " << i;
            return;
        }
        else
        {
            cout << "The Element doesn't exist in the array";
        }
    }
}

int main()
{
    int arr[] = {20,40,60,80,100,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    lastOccurence(60,arr,n);
}


