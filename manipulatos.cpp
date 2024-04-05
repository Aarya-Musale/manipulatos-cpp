#include <iostream>
#include <iomanip> // Required for manipulators

int main() {

    std::cout << "Using manipulators to format numbers:\n";
    int num1 = 123;
    float num2 = 456.789;
    double num3 = 789.1234;
    std::cout << "Fixed precision for floating-point numbers:\n";
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "num2: " << num2 << "\n";
    std::cout << "num3: " << num3 << "\n";

    std::cout << "Setting width for output:\n";
    std::cout << std::setw(10) << "num1: " << num1 << "\n";
    std::cout << std::setw(10) << "num2: " << num2 << "\n";
    std::cout << std::setw(10) << "num3: " << num3 << "\n";

    std::cout << "Setting fill character:\n";
    std::cout << std::setfill('*');
    std::cout << std::setw(10) << "num1: " << num1 << "\n";
    std::cout << std::setw(10) << "num2: " << num2 << "\n";
    std::cout << std::setw(10) << "num3: " << num3 << "\n";

    return 0;
}

