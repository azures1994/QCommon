#include "Test.h"

#include "QCommon/file.h"

namespace Test
{

void test_writeMemoryToBinaryFile(){

    QCommon::writeMemoryToBinaryFile("temp/test.bin", "Hello World", 12);
    QCommon::writeMemoryToBinaryFile(nullptr, nullptr, 0);

}

} // namespace Test
