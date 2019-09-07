#ifndef PMR_STRING_H
#define PMR_STRING_H

#ifdef __cpp_lib_memory_resource
    #include <string>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/string>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_STRING_H