add_library(net
    dummynet.cpp
    #add new cpp files in net here
)
target_include_directories(net PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(net PUBLIC common ws2_32)