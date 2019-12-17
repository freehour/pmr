#ifndef PMR_MEMORY_RESOURCE_FEATURE_H
#define PMR_MEMORY_RESOURCE_FEATURE_H

/**
 * Similar to
 * https://stackoverflow.com/questions/53365538/how-to-determine-whether-to-use-filesystem-or-experimental-filesystem
 */

// Check feature test macro for <memory_resource>
#if __cpp_lib_memory_resource >= 201603L
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 0
    #define INCLUDE_PMR_MEMORY_RESOURCE 1

// Check feature test macro for <experimental/memory_resource>
#elif __cpp_lib_experimental_memory_resources >= 201402L
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1
    #define INCLUDE_PMR_MEMORY_RESOURCE 0

// We can't check if headers exist...
// Let's assume experimental to be safe
#elif !defined(__has_include)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1
    #define INCLUDE_PMR_MEMORY_RESOURCE 0

// Check if the header "<memory_resource>" exists
#elif __has_include(<memory_resource>)

    // Use the normal version
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 0
    #define INCLUDE_PMR_MEMORY_RESOURCE 1

// Check if the header "<experimental/memory_resource>" exists
#elif __has_include(<experimental/memory_resource>)
    #define INCLUDE_PMR_MEMORY_RESOURCE_EXPERIMENTAL 1
    #define INCLUDE_PMR_MEMORY_RESOURCE 0

// Fail if neither header is available with a nice error message
#else
    #error Could not find system header "<memory_resource>" or "<experimental/memory_resource>"
#endif

#endif //PMR_MEMORY_RESOURCE_FEATURE_H
