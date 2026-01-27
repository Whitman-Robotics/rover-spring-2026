add_library(net
    net.cpp
    #add new cpp files in net here
)
target_include_directories(net PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

find_package(Threads REQUIRED)
target_link_libraries(net PUBLIC common Threads::Threads)