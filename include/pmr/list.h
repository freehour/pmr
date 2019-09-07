#ifndef PMR_LIST_H
#define PMR_LIST_H

#ifdef __cpp_lib_memory_resource
    #include <list>
    using pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/list>
    using pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_LIST_H