add_library(lib-testaccount TestAcount.h)
set_target_properties(lib-testaccount PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(lib-testaccount PUBLIC .)
