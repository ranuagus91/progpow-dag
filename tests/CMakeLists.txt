add_executable(progpow-dag_tests test_core.cpp)
target_link_libraries(progpow-dag_tests PRIVATE work)
target_include_directories(progpow-dag_tests PRIVATE ${CMAKE_SOURCE_DIR}/include)
add_test(NAME core COMMAND progpow-dag_tests)
