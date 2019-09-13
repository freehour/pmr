#ifndef PMR_DEQUE_H
#define PMR_DEQUE_H

#ifdef __cpp_lib_memory_resource
    #include <deque>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resources
    #include <experimental/deque>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_DEQUE_H
