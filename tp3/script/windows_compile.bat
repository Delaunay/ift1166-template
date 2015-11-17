echo Compile le programme TicTacToe
g++ ticTacToe.cpp ticTacToe_main.cpp -o game -std=c++11
g++ ticTacToe.cpp ticTacToe_test.cpp -o game_test -std=c++11

echo Compile ComptBanc
g++ comptBanc.cpp comptBanc_test.cpp -o comptBanc_test -std=c++11

pause