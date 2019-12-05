#include <iostream>

#include "file.h"


int main() {
    // Example

    File::write("test.txt", "test query");

    std::cout << File::read("test.txt");
    return 0;
}
