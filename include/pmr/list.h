#ifndef PMR_LIST_H
#define PMR_LIST_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/list>
    namespace pmr = std::experimental::pmr;
#else
    #include <list>
    namespace pmr = std::pmr;
#endif

#endif //PMR_LIST_H