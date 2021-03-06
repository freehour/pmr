#ifndef PMR_MEMORY_RESOURCE_H
#define PMR_MEMORY_RESOURCE_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE
    #include <memory_resource>
    namespace pmr = std::pmr;
#elif INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/memory_resource>
    namespace pmr = std::experimental::pmr;
#endif

#endif //PMR_MEMORY_RESOURCE_H
