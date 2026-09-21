#include <iostream>
#include <string>

// Функция выводит переданное приветствие в консоль
void printGreeting(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    printGreeting("Hello, GitHub Flow!");
    return 0;
}
