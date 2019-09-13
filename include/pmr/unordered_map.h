#ifndef PMR_UNORDERED_MAP_H
#define PMR_UNORDERED_MAP_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/unordered_map>
    namespace pmr = std::experimental::pmr;
#else
    #include <unordered_map>
    namespace pmr = std::pmr;
#endif

#endif //PMR_UNORDERED_MAP_H
