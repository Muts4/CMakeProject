cmake_minimum_required(VERSION 3.28.2)

project(CmakeProject)

add_executable(${PROJECT_NAME}
 main.cpp
 testheader.h)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

install(FILES main.cpp  myheader.h DESTINATION src)
