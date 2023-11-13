add_executable(app1 helloworld.cpp)
target_link_libraries(app1 PRIVATE lib-account lib-deep lib-mystring lib-player lib-testaccount lib-threads)
