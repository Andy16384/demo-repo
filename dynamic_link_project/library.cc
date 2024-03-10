// library.cpp

#include <iostream>
#include "library.h"

extern "C" {
    void helloWorld() {
        std::cout << "Hello, World!" << std::endl;
    }
}
