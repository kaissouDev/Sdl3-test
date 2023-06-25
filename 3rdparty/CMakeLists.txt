add_subdirectory(SDL)
add_subdirectory(Boxer)

add_library(3rdparty INTERFACE)
target_link_libraries(3rdparty INTERFACE 
    SDL3::SDL3
    Boxer
)
