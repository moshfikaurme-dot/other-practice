#include<iostream>
using namespace std;
void marge(int a[10], int l, int m, int r){
    int new_array[10];
    int i = l;
    int j = m+1;
    int k = l;

    while(i<=m && j<=r){
        if(a[i]>a[j]){
            new_array[k] = a[j];
            j++;
            k++;
        }
        else
            {
                new_array[k] = a[i];
                i++;
                k++;
            }
    }


    while(i<=m){
        new_array[k] = a[i];
                i++;
                k++;
    }
    while(j<=r){
        new_array[k] = a[j];
            j++;
            k++;
    }

    for(int s = l; s<=r;s++){

       a[s] = new_array[s];
    }

}

void margesort(int ar[10],int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        margesort(ar, l, mid);
        margesort(ar, mid+1, r);
        marge(ar, l, mid ,r);

    }


}


int main(){

    int arr[10];
    int li = 0;
    int ri = 9;
    for(int i=0;i<10;i++){
        cin>>arr[i];

    }
    cout<<"before sorting:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

    }
        margesort(arr,  li, ri);

    cout<<endl<<"after sorting:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";

    }


}
