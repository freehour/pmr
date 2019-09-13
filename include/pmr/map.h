#ifndef PMR_MAP_H
#define PMR_MAP_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/map>
    namespace pmr = std::experimental::pmr;
#else
    #include <map>
    namespace pmr = std::pmr;
#endif

#endif //PMR_MAP_H