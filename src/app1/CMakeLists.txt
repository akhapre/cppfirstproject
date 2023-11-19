add_executable(app1 helloworld.cpp)

set(CMAKE_FIND_DEBUG_MODE TRUE)
find_package(fmt CONFIG REQUIRED)
set(CMAKE_FIND_DEBUG_MODE FALSE)

target_link_libraries(app1 PRIVATE lib-account lib-deep lib-mystring lib-player lib-threads fmt::fmt)
