#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string a = "Bye, T-FOS!";

    std::string b = a;
    std::string c = move(b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
}