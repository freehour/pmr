#ifndef PMR_VECTOR_H
#define PMR_VECTOR_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/vector>
    namespace pmr = std::experimental::pmr;
#else
    #include <vector>
    namespace pmr = std::pmr;
#endif

#endif //PMR_VECTOR_H