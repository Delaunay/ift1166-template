
all: tictactoe tic_test comptBanc_test

tictactoe: 
	g++ ticTacToe_main.cpp ticTacToe.cpp ticTacToe.h -o tictactoe.out -Wall -std=c++0x
	
tic_test: 
	g++ ticTacToe_test.cpp ticTacToe.cpp ticTacToe.h -o tic_test.out -Wall -std=c++0x
	
comptBanc: 
	g++ comptBanc.cpp comptBanc_test.cpp comptBanc.h -o comptBanc.out -Wall -std=c++0x
	
.PHONY: tictactoe
.PHONY: tic_test
.PHONY: comptBanc
