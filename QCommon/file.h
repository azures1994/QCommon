#pragma once

#include <cstddef>

namespace QCommon{

bool writeMemoryToBinaryFile(const char* fileName_, const void* data_, size_t size_);

} // namespace QCommon