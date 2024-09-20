#include <iostream>

int main() {
    int a, b;
    float result;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b; // Read two integers

    if (b == 0) {
        std::cout << "Error: Division by zero is not allowed.\n";
    } else {
        result = static_cast<float>(a) / b; // Perform floating-point division
        std::cout << "The division of " << a << " and " << b << " is " << result << "\n";
    }

    return 0;
}
