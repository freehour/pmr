project(pmr_lib VERSION 1.0.0 LANGUAGES CXX)

# Must use GNUInstallDirs to install libraries into correct
# locations on all platforms.
include(GNUInstallDirs)

# Define headers for this library.
set(HEADER_FILES
		include/pmr/deque.h
		include/pmr/forward_list.h
		include/pmr/list.h
		include/pmr/map.h
		include/pmr/memory_resource.h
		include/pmr/memory_resource_feature.h
		include/pmr/pmr.h
		include/pmr/regex.h
		include/pmr/set.h
		include/pmr/string.h
		include/pmr/unordered_map.h
		include/pmr/unordered_set.h
		include/pmr/vector.h
)

# create glob library target
add_library(pmr INTERFACE)

# pmr is a c++17 (experimental) feature
target_compile_features(pmr INTERFACE cxx_std_17)

# INTERFACE headers are not used for
# compiling the library but will be added to consumers' build
# paths.
target_include_directories(pmr INTERFACE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		$<INSTALL_INTERFACE:include>)

# 'make install' to the correct locations (provided by GNUInstallDirs).
install(TARGETS pmr EXPORT pmrConfig
		ARCHIVE  DESTINATION ${CMAKE_INSTALL_LIBDIR}
		LIBRARY  DESTINATION ${CMAKE_INSTALL_LIBDIR}
		RUNTIME  DESTINATION ${CMAKE_INSTALL_BINDIR})  # This is for Windows
install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# This makes the project importable from the install directory
# Put config file in per-project dir (name MUST match), can also
# just go into 'cmake'.
install(EXPORT pmrConfig DESTINATION cmake)

# This makes the project importable from the build directory
export(TARGETS pmr FILE pmrConfig.cmake)
