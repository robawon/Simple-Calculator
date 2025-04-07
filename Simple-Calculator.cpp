#include <iostream>
#include <stdexcept>

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw std::invalid_argument("Denominator cannot be zero.");
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter numerator: ";
    std::cin >> num1;
    
    std::cout << "Enter denominator: ";
    std::cin >> num2;

    try {
        double result = divide(num1, num2);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}