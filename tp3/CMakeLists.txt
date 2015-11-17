PROJECT(TP3)
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.4)

# Use latest C and C++ standard
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# Le jeu
ADD_EXECUTABLE(toe_main ticTacToe_main.cpp ticTacToe.cpp)

# Le test
ADD_EXECUTABLE(toe_test ticTacToe_test.cpp ticTacToe.cpp)

# Le main
ADD_EXECUTABLE(comptBanc comptBanc_main.cpp comptBanc.cpp)

# Le test
ADD_EXECUTABLE(comptBanc_test comptBanc_test.cpp comptBanc.cpp)
