#include <iostream>

int main() {
    int a, b, res, choice;

    std::cout << "Enter 2 numbers:\n";
    std::cin >> a >> b;

    std::cout << "Enter\n 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Modulus\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            res = a + b;
            std::cout << "Result: " << res << std::endl;
            break;
        case 2:
            res = a - b;
            std::cout << "Result: " << res << std::endl;
            break;
        case 3:
            res = a * b;
            std::cout << "Result: " << res << std::endl;
            break;
        case 4:
            if (b != 0) {
                res = a / b;
                std::cout << "Result: " << res << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        case 5:
            if (b != 0) {
                res = a % b;
                std::cout << "Result: " << res << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        default:
            std::cout << "Enter the correct choice" << std::endl;
    }

    return 0;
}