#include <iostream>

#include "QCommon/file.h"

void test_writeMemoryToBinaryFile(){

    QCommon::writeMemoryToBinaryFile("temp/test.bin", "Hello World", 12);
    QCommon::writeMemoryToBinaryFile(nullptr, nullptr, 0);

}

int main(int, char**){
    std::cout << "Hello, from QCommon!\n";

    test_writeMemoryToBinaryFile();

    return 0;
}
