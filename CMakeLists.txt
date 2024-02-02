cmake_minimum_required(VERSION 3.28.2)

project(CmakeProject)

add_executable(${PROJECT_NAME}
    main.cpp
    testheader.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES main.cpp testheader.h DESTINATION src)
