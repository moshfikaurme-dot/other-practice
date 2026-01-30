#include <iostream>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    
    std::cout << "Array before adding 5: ";
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    
    for(int i = 0; i < 10; i++) {
        arr[i] += 5;
    }

    
    std::cout << "Array after adding 5: ";
    for(int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
