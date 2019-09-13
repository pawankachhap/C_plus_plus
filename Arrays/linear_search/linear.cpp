#include<iostream>

using namespace std;

int linearsearch(int [], int, int);

int main()
{
    int arr[50], size, search, found;
    cout<<"\nEnter the size of array : ";
    cin>>size;
    cout<<"Enter the array elements: ";
    for(int i=0; i<size; +i)
    {
        cin>>arr[i];
    }

    cout<<"Enter search key : ";
    cin>>search;

    found = linearsearch(arr, size, search);

    if (found == -1)
        cout<<"\n Search key not found !!!";
    else
    {
        cout<<"\nKey - "<<search<<" found at index "<<found;
    }

    return 0;    
}

int linearsearch (int arr[], int size, int key)
{
    for (int j=0; j<size; ++j)
    {
        if(arr[j] == key) return j;
    }

    return -1;
}