# find all source and header files
file(GLOB_RECURSE AWESOMENPC_SOURCE src/*cpp)
file(GLOB_RECURSE AWESOMENPC_HEADER include/*hpp)

include_directories(include)

# generate CMake library to link executables against
add_library(AwesomeNPC ${AWESOMENPC_SOURCE} ${AWESOMENPC_HEADER})