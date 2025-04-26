#include <iostream>
#include "Test/Test.h"
int main(int, char**){
    std::cout << "Hello, from QCommon!\n";

    Test::test_writeMemoryToBinaryFile();

    return 0;
}
