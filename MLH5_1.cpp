#include<iostream>
using namespace std;
void mergesort (int a[],int i,int j);
void merge (int a[],int i1,int j1,int i2,int j2);
int main(){

    int a[30],n,i;
    cout <<"enter no of elements:";
    cin >>n;
    cout<<"enter array elements:"; 
    for(i=0;i<n;i++)
    cin >>a[i];
    mergesort (a,0,n-1);
}