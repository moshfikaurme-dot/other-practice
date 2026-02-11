#include <iostream>
#include <cstdlib>
#include <ctime>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[10];
    
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100; // Generate random numbers between 0 and 99
    }
    
    std::cout << "Array before sorting:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    
    bubbleSort(arr, 10);
    
    std::cout << "\nArray after sorting:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
