//input 5,10,20,30,40,50,2,60
#include<iostream>
using namespace std;
int main (){
    int arr [10],i,n;
    cout<<"enter the size of arr:";
    cin>>n;
    cout <<"enter the elements of arr:";
    for (i=0;i<n;i++){
        cin >>arr[i];
    } 
    
    cout <<"the elements of arr are:";
    for (i=0;i<n;i++){
        cout << arr[i]<<"";

    }
    int pos, elemenet;
    cout <<"enter three position you want to insert:";
    cin>> pos;
    cout <<"the element for insertion:";
    cin >> elemenet;

    for (i=n;i>=pos;i--){
        arr [i+1]=arr[i];
    }
    arr [pos]=elemenet;
    n++;
    cout<<"after insrton the elements are:";
    for (i=0;i<n;i++){
        cout << arr [i]<<"";
    }

    return 0;

    }