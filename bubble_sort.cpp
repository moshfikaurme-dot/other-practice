#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,9,8,7,6,5};
    int i=0,j=0, Size = 6, counter = 0, Swap = 0 ,swa= 0;
        for(i; i<Size; i++){
            Swap++;
            for(j = 0; j<Size; j++){
            swa++;
                if(arr[j]>arr[j+1]){
                    //swap
                    int temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                    counter++;
                }
            }
        }
    cout<<"after sorting: "<<endl<<Swap<<" "<<swa<<" "<<counter<<endl;

    for(i = 0; i<Size; i++){
        cout<<arr[i]<<" ";
    }



}
