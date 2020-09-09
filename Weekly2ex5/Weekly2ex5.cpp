#include <iostream>

int main() {
    int numbers{ 5 };
    do {
        std::cout << numbers << '\n';
        numbers = numbers + 5;
    }

    while (numbers <= 50);

    return 0;
}
