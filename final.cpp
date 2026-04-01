
#include<bits/stdc++.h>
using namespace std;
int main (){
    int item, capacity;
    cin>>item>>capacity;
    int W [item]={2,5,9,7};
    int V [item]={70,30,90,50};

    float VW [item],maxi;
    for (int i=0; i<item;i++){
        VW [i]=V [i]/W[i]*1.0;
    }

    int it, total_profit =0;
    while (capacity > 0){
        maxi =-1;
        for (int i=0;i<item;i++){
            if(maxi < VW[i]){
                maxi = VW[i];
                it =i;
            }
        }
        if (capacity >=W [it]){
            total_profit +=V [it];
            capacity -=W[it];
            VW [it]=-1;
        }
        else{
            total_profit +=capacity*VW[it];
            capacity =0;
            VW[it]=-1;
        }
    }
    cout<< total_profit<<endl;
    return 0;
}
