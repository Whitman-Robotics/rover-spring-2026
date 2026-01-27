add_executable(rover_spring26
    main.cpp
    # add new cpp files here
)

target_link_libraries(rover_spring26
    PRIVATE
    common
    net
)

find_package(Threads REQUIRED)
target_link_libraries(rover_pi PRIVATE Threads::Threads)