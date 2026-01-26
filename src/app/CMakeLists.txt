add_executable(rover_spring26
    window.cpp
    # add new cpp files here
)

target_link_libraries(rover_spring26
    PRIVATE
    common
    net
    video
)

set_target_properties(rover_spring26 PROPERTIES
    WIN32_EXECUTABLE TRUE
)