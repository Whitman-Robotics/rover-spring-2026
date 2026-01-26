#don't add .cpp files to common it's just for headers (don't add headers either this is all you need)
add_library(common INTERFACE)
target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})