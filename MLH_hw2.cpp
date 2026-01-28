#include <iostream>
using namespace std;

int main() {
    int arr[15] = {10, 15, 20, 30, 37, 40, 45, 50, 58, 62, 69, 72};
    int n = 15;
    int start = 0;
    int end = 12;
    int target = 20;
    int mid;

    while (start <= end){
        mid = (start + end) / 2;
        if (target == arr[mid]) {
            cout << "right" << endl;
            cout <<"Index number " << mid << endl;
            break;
        }
         else if (target > arr[mid]) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }

    if (start > end) {
        cout << "not right";
    }

    return 0;
}