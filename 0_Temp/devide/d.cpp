#include <iostream>
#include <cmath>

double roundHalfToEven(double num) {
    double roundedDown = std::floor(num);
    double roundedUp = std::ceil(num);
    double rounded = std::round(num);

    if (std::abs(rounded - num) == 0.5 && std::fmod(roundedDown, 2.0) == 0.0) {
        return roundedDown;
    }

    return rounded;
}

int main() {
    double num1 = 2.5;
    double num2 = 3.5;

    double rounded1 = roundHalfToEven(num1);
    double rounded2 = roundHalfToEven(num2);

    std::cout << rounded1 << std::endl;  // Output: 2.0
    std::cout << rounded2 << std::endl;  // Output: 4.0

    return 0;
}
