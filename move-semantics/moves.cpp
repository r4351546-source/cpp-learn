#include <iostream>
#include <string>
#include <utility>


template<typename T>
class Buffer {
    public:

    void copy(const T& a, T& b) {
        b = a;
    }
    void moves(T& a, T& x) {
        x = std::move(a);
    }
};

int main() {
    std::string x = "tadey";
    std::string z;
    Buffer<std::string> a;

    a.copy(x, z);
    std::cout << "copy x: " << x << std::endl;
    std::cout << "copy z: " << z << std::endl;

    a.moves(x, z);  
    std::cout << "move x: " << x << std::endl;
    std::cout << "move z: " << z << std::endl;
    return 0;
}