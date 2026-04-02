#include <iostream>
using namespace std;
int main() {
   int capacity = 5;
   int myarray[capacity];
   for(int i = 0; i<capacity; i++)
   {
       cin>>myarray[i];
   }
   int value;
   cout<<"enter value to search : ";
   cin>>value;
         for(int i = 0; i<capacity; i++)
             {
                    if(value == myarray[i]){
                        cout<<"value found at position "<<i+1;
                    }
             }

    return 0;
}
