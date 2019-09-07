#ifndef PMR_FORWARD_LIST_H
#define PMR_FORWARD_LIST_H

#ifdef __cpp_lib_memory_resource
    #include <forward_list>
    using pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/forward_list>
    using pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_FORWARD_LIST_H
