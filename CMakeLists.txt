cmake_minimum_required(VERSION 3.7)
project(C___project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp 10/stock00.h 10/stock00.cpp 10/exercise/1/BankAccount.h 10/exercise/1/BankAccount.cpp 10/exercise/2/person.h 10/exercise/2/person.cpp 11/mytime0.h 11/mytime0.cpp 11/vector.h 11/vector.cpp 12/strngbad.h 12/strngbad.cpp 11/stonewt.h 11/stonewt.cpp)
add_executable(C___project ${SOURCE_FILES})