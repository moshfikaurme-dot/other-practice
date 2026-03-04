#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num [20];
    int i;
    int sum=0;
    cout <<"please enter your input:"<< endl;
    for (i=0;i<5;i++);
    {
        cin >> num[i];
    }
    for (i=4;i>=0;i--);
    {
        cout << num[i];
        sum=sum+num[i];
    }
    return 0;
}