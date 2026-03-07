#include<iostream>
using namespace std;
void bubbleSort (int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap (arr[j], arr[j+1]);
            }
        }
    }
}
int main (){
    int arr[10];
    cout <<"enter 7 elements in random order:\n";
    for (int i=0;i<7;i++){
        cin >>arr[i];
    }
    bubbleSort(arr,10);

    cout<<"sorted arr:\n";
    for (int i =0;i<7;i++){
        cout <<arr[i]<<"";

    }
    cout<<endl;
    return 0;


}