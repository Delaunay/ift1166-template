clang++ ticTacToe.cpp ticTacToe_main.cpp -o game -std=c++11
clang++ ticTacToe.cpp ticTacToe_test.cpp -o game_test -std=c++11

clang++ comptBanc.cpp comptBanc_test.cpp -o comptBanc_test -std=c++11

read -t10 -n1 -r -p "Press any key to continue..." key