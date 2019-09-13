#ifndef PMR_DEQUE_H
#define PMR_DEQUE_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/deque>
    namespace pmr = std::experimental::pmr;
#else
    #include <deque>
    namespace pmr = std::pmr;
#endif

#endif //PMR_DEQUE_H
