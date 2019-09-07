#ifndef PMR_MAP_H
#define PMR_MAP_H

#ifdef __cpp_lib_memory_resource
    #include <map>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/map>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_MAP_H