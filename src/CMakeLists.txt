add_library(work STATIC work.cpp)
target_include_directories(work PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(progpow-dag main.cpp)
target_link_libraries(progpow-dag PRIVATE work)
