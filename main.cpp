#include <iostream>
#include <string>

int main() {
    //loops

    std::string name;

    while (name.empty()) { //while statement is true, it will keep looping
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello, " << name << "!" << std::endl;

    int number;

    //do while loop = do some block of code, then check the condition
    do {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    // for loop = for (initialization; condition; increment) { block of code }
    for (int i = 0; i < 3; i++) {
        std::cout << i << std::endl;
    }

    //break & continue statements = break out of the loop or skip to the next iteration
    for (int i = 0; i < 10; i++) {
        if (i == 3) {
            continue;
        }
        if (i == 5) {
            break;
        }
        std::cout << i << std::endl;
    }

    //nested loops = loop inside a loop
    for (int i = 0; i < 3; i++) {
        std::cout << "Outer loop: " << i << std::endl;
        for (int j = 0; j < 5; j++) {
            std::cout << "Inner loop: " << j << std::endl;
        }
    }
    

    return 0;
}