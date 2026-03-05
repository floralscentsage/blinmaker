#include <iostream>
using namespace std;

int main() {
    
    
    std::cout << "Welcome to Blin Maker C++ Edition!" << std::endl;
    std::cout << "Inspired by Life of Boris Java Version" << std::endl;
    std::cout << "But written by floralscentsage in C plus plus." << std::endl;
    std::cout << "Please note, that this was already done by someone I was just bored" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    int flour,milk,eggs;
    int flourMin = 100;
    int milkMin = 200;
    int eggsMin = 1;

    std::cout << "How many grams of flour do you have: ";
    std::cin >> flour;

    std::cout << "Great, noted! How many mililiters of milk do you have: ";
    std::cin >> milk;

    std::cout << "Now... How many eggs do you have: ";
    std::cin >> eggs;

    if (flour < flourMin || milk < milkMin || eggs < eggsMin) {
        std::cout << "No blin today :(" << std::endl;
        return 0;
    }

    int flourAmount = flour / flourMin;
    int milkAmount = milk / milkMin;
    int eggsAmount = eggs / eggsMin;

    int userIngredients[3] = {flourAmount,milkAmount,eggsAmount};
    int smallest = userIngredients[0];

    for (int i = 0; i < 2; i++) {
        if (userIngredients[i] < smallest) {
            smallest = userIngredients[i];
        }
    }

    std::cout << "Calculations complete!" << std::endl;
    std::cout << "You can make " << smallest << " portions of blins!" << std::endl;
    std::cout << "Which is " << smallest*4 << " blins!" << std::endl;
    std::cout << "You will need " << smallest*flourMin << " grams of flour" << std::endl;
    std::cout << "You will need " << smallest*milkMin << " mililiters of milk" << std::endl;
    std::cout << "You will need " << smallest*eggsMin << " eggs" << std::endl;
    std::cout << "Blin maker shutting down...";
    return 0;
}