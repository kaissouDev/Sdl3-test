add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE 3rdparty)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall)