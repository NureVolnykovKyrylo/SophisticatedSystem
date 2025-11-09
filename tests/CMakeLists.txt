cmake_minimum_required(VERSION 3.16)

project("math_test")

add_executable(math_test 
    "${CMAKE_CURRENT_LIST_DIR}/math_test.cpp"
)

target_link_libraries(math_test 
    PRIVATE
        GTest::gtest_main
        simple_math
)

enable_testing()

include(GoogleTest)
gtest_discover_tests(math_test)

set_target_properties(math_test 
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)