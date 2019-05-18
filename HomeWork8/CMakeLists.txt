cmake_minimum_required(VERSION 3.13)
project(HomeWork8)

set(CMAKE_CXX_STANDARD 17)

add_executable(HomeWork8 main.cpp Employee.h Employee.cpp CEO.h CEO.cpp Director.cpp Director.h Secretary.cpp Secretary.h
        Cause.h Cause.cpp Department.cpp Department.h Office.cpp Office.h Budget.cpp Budget.h GrantDepartment.cpp
        GrantDepartment.h Event.h Event.cpp FundRaisingDepartment.cpp FundRaisingDepartment.h FundsBalance.cpp FundsBalance.h
        Trust.cpp Trust.h Message.cpp Message.h)