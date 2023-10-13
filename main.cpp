#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for(auto &number : numbers)
    {
        std::cout << number << " ";
    }

}
