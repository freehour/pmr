#ifndef PMR_STRING_H
#define PMR_STRING_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE
    #include <string>
    namespace pmr = std::pmr;
#elif INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/string>
    namespace pmr = std::experimental::pmr;
#endif

#endif //PMR_STRING_H