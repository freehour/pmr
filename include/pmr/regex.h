#ifndef PMR_REGEX_H
#define PMR_REGEX_H

#include "memory_resource_feature.h"

#if INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL
    #include <experimental/regex>
    namespace pmr = std::experimental::pmr;
#else
    #include <regex>
    namespace pmr = std::pmr;
#endif

#endif //PMR_REGEX_H