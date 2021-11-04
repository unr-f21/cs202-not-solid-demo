cmake_minimum_required(VERSION 3.20)
project(code)

set(CMAKE_CXX_STANDARD 11)

add_executable(code main.cpp Person.cpp Person.h SalaryManager.cpp SalaryManager.h Manager.cpp Manager.h IEmployee.cpp IEmployee.h DockWorker.cpp DockWorker.h)
