/*3. Intermediate:
Create a C++ program to transpose a given square matrix. The transpose of a matrix is
obtained by exchanging its rows with its columns. Display both the original and transposed
matrices.
Original Matrix:
1 2 3
4 5 6
7 8 9
Sample Output:
Transposed Matrix:
1 4 7
2 5 8
3 6 9*/
#include<iostream>
using namespace std;

int main(){

    int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int row= 3;
        int column = 3;
        cout<<"original array:"<<endl;
    for(int i= 0;i<row;i++){
            for(int j = 0; j<column; j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
}

        for(int i= 0;i<row;i++){
            for(int j = 0; j<column; j++){
                if(i == j){

                    break;
                }
                int temp[1][1];
                temp[0][0] = ar[j][i];
                ar[j][i] = ar[i][j];
                ar[i][j] = temp[0][0];
            }
        }

        cout<<"transposed array:"<<endl;
    for(int i= 0;i<row;i++){
            for(int j = 0; j<column; j++){
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
}
return 0;
}
