cmake_minimum_required(VERSION 3.11)

project(pmr VERSION 1.0.0 LANGUAGES CXX)

# Must use GNUInstallDirs to install libraries into correct
# locations on all platforms.
include(GNUInstallDirs)

# the contribution library
add_subdirectory(lib)