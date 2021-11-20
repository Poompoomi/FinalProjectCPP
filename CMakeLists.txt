cmake_minimum_required(VERSION "3.7.1")

project("bank")

add_executable("$(PROJECT_NAME)" "bank.cpp")

install(TARGETS "$(PROJECT_NAME)" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "bank.cpp" DESTINATION src) #${CMAKE_INSTALL_PREFIX}/src

