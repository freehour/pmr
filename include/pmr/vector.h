#ifndef PMR_VECTOR_H
#define PMR_VECTOR_H

#ifdef __cpp_lib_memory_resource
    #include <vector>
    namespace pmr = std::pmr;
#elif __cpp_lib_experimental_memory_resource
    #include <experimental/vector>
    namespace pmr = std::experimental::pmr;
#else
    #error "no memory_resource support"
#endif

#endif //PMR_VECTOR_H