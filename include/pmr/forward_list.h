#ifndef PMR_FORWARD_LIST_H
#define PMR_FORWARD_LIST_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/forward_list>
    namespace pmr = std::experimental::pmr;
#else
    #include <forward_list>
    namespace pmr = std::pmr;
#endif

#endif //PMR_FORWARD_LIST_H
