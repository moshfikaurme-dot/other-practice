#include <iostream>
#include <climits>

int main() {
    int arr[10];
    int smallest = INT_MAX;
    int largest = INT_MIN;

    std::cout << "Enter 10 elements: ";
    for(int i = 0; i < 10; i++) {
        std::cin >> arr[i];
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    std::cout << "Smallest element: " << smallest << std::endl;
    std::cout << "Largest element: " << largest << std::endl;

    return 0;
}
