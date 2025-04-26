#include <iostream>
#include <fstream>

#include "file.h"

namespace QCommon{

bool writeMemoryToBinaryFile(const char* fileName_, const void* data_, size_t size_){

    if(fileName_ == nullptr){
        printf("fileName_ is nullptr\n");
        return false;
    }

    if(data_ == nullptr){
        printf("data_ is nullptr\n");
        return false;
    }

    if(size_ == 0){
        printf("size_ is 0\n");
        return false;
    }

    std::ofstream ofile(fileName_, std::ios::binary);
    if(!ofile.is_open()){
        printf("Failed to open file(%s)\n", fileName_);
        return false;
    }

    ofile.write(static_cast<const char*>(data_), size_);
    if(!ofile.good()){
        printf("Failed to write file(%s:%p:%ld)\n", fileName_, data_, size_);
        ofile.close();
        return false;
    }

    ofile.close();

    return true;
}

} // namespace QCommon