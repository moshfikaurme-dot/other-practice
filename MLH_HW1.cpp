#include<iostream>
using namespace std;

int main()
{
    int size;

    cout<< "Enter your array size: ";
    cin>>size;

    int arr[size],i;

    cout<< "Enter your array element: \n";
    for(i=0; i<size; i++)
    {
        cout<<"array index["<<i<<"]: ";
        cin>> arr[i];
    }

    int pos;
    cout<< "Enter your deleting element position: ";
    cin>>pos;

    cout<< "Before deleting element: ";
    for(i=0; i<size; i++){
        cout<< arr[i] << " ";
    }

    for(i=pos; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    cout<< "\nAfter deleting Element: ";
    for(i=0; i<size-1; i++){
        cout<< arr[i] << " ";
    }
}