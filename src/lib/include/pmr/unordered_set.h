#ifndef PMR_UNORDERED_SET_H
#define PMR_UNORDERED_SET_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE
    #include <unordered_set>
    namespace pmr = std::pmr;
#elif INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/unordered_set>
    namespace pmr = std::experimental::pmr;
#endif

#endif //PMR_UNORDERED_SET_H