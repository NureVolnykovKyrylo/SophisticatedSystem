cmake_minimum_required(VERSION 3.16)

project("SophisticatedSystem")

enable_testing()

add_subdirectory(external/googletest)
add_subdirectory(tests)

add_library(simple_math 
    STATIC
        "${CMAKE_CURRENT_LIST_DIR}/src/math/simple_math.cpp"
)

target_include_directories(simple_math
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/src/math"
)

add_executable(main_app 
    "${CMAKE_CURRENT_LIST_DIR}/src/main.cpp"
)

target_link_libraries(main_app
    PRIVATE
       simple_math 
)

set_target_properties(simple_math 
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)

set_target_properties(main_app 
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)