#include <iostream>

class Greeter {
public:
    void say_hello() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    Greeter greeter;
    greeter.say_hello();
    return 0;
}
