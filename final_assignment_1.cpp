#include <iostream>

class Fruit {
protected:
    int numFruits;

public:
    Fruit() : numFruits(0) {}

    void addToBasket(int num) {
        numFruits += num;
    }

    int getNumFruits() const {
        return numFruits;
    }
};

class Apple : public Fruit {
public:
    void addApples(int num) {
        addToBasket(num);
    }

    int getApples() const {
        return getNumFruits();
    }
};

class Mango : public Fruit {
public:
    void addMangoes(int num) {
        addToBasket(num);
    }

    int getMangoes() const {
        return getNumFruits();
    }
};

int main() {
    Apple appleBasket;
    Mango mangoBasket;

    int numApples, numMangoes;
    std::cout << "Enter the number of apples: ";
    std::cin >> numApples;

    std::cout << "Enter the number of mangoes: ";
    std::cin >> numMangoes;


    appleBasket.addApples(numApples);
    mangoBasket.addMangoes(numMangoes);

    
    std::cout << "Number of Apples: " << appleBasket.getApples() << std::endl;
    std::cout << "Number of Mangoes: " << mangoBasket.getMangoes() << std::endl;

    int totalFruits = appleBasket.getNumFruits() + mangoBasket.getNumFruits();
    std::cout << "Total number of fruits in the basket: " << totalFruits << std::endl;

    return 0;
}