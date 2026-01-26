add_library(video
    dummyvideo.cpp
    #add new .cpp files in video here 
)
target_include_directories(video PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(video PUBLIC common)