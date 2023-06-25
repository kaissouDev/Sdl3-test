add_subdirectory(SDL)
add_subdirectory(Boxer)

add_library(3rdparty INTERFACE)
target_link_libraries(3rdparty INTERFACE 
    Boxer
    SDL3::SDL3
)
