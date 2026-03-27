#include<iostream>
using namespace std;
int binary(int arr[5], int l, int r, int x){

    while(l<=r){
            int mid = (l+r)/2;
            if(arr[mid]==x){
                return mid;
            }
            else if(arr[mid]<x){
                l = mid+1;
            }
            else
                r = mid-1;

    }
    return -1;

}

int main(){
    int ar[5] = {20,40,60,80,100};
    int l = 0;
    int r = 4;
    int x = 20;

    int result = binary(ar,l,r,x);

     if(result == -1){
        cout<<"not found";

     }
     else
        cout<<"position :"<< result+1;
}
