#ifndef PMR_MEMORY_RESOURCE_H
#define PMR_MEMORY_RESOURCE_H

#ifdef __cpp_lib_memory_resource
    #include <memory_resource>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/memory_resource>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_MEMORY_RESOURCE_H
