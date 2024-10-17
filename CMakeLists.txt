cmake_minimum_required(VERSION 3.16)

project(reverse_number LANGUAGES C)

add_executable(reverse_number main.c)

include(GNUInstallDirs)
install(TARGETS reverse_number
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
