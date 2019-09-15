#ifndef PMR_SET_H
#define PMR_SET_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE
    #include <set>
    namespace pmr = std::pmr;
#elif INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/set>
    namespace pmr = std::experimental::pmr;
#endif

#endif //PMR_SET_H
