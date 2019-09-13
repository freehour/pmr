#ifndef PMR_UNORDERED_SET_H
#define PMR_UNORDERED_SET_H

#ifdef __cpp_lib_memory_resource
    #include <unordered_set>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resources
    #include <experimental/unordered_set>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_UNORDERED_SET_H