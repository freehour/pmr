#ifndef PMR_REGEX_H
#define PMR_REGEX_H

#ifdef __cpp_lib_memory_resource
    #include <regex>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/regex>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_REGEX_H