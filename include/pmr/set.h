#ifndef PMR_SET_H
#define PMR_SET_H

#ifdef __cpp_lib_memory_resource
    #include <set>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resources
    #include <experimental/set>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_SET_H
