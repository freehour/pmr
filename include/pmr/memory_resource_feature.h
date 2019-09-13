#ifndef PMR_MEMORY_RESOURCE_H
#define PMR_MEMORY_RESOURCE_H

/**
 * Similar to
 * https://stackoverflow.com/questions/53365538/how-to-determine-whether-to-use-filesystem-or-experimental-filesystem
 */

// Check feature test macro for <memory_resource>
#if defined(__cpp_lib_memory_resource)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 0

// Check feature test macro for <experimental/memory_resource>
#elif defined(__cpp_lib_experimental_memory_resources)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1

// We can't check if headers exist...
// Let's assume experimental to be safe
#elif !defined(__has_include)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1

// Check if the header "<memory_resource>" exists
#elif __has_include(<memory_resource>)

    // Use the normal version
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 0

// Check if the header "<filesystem>" exists
#elif __has_include(<experimental/memory_resource>)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1

// Fail if neither header is available with a nice error message
#else
    #error Could not find system header "<memory_resource>" or "<experimental/memory_resource>"
#endif

#endif //PMR_MEMORY_RESOURCE_H
