# CS361-Connect4
The game connect four for CS361
built in Visual Studio 2017 using C++

main.cpp given as part of the assignment
currently working on game.h and player.h header files

added game header to master branch

added players header to the master branch
this has a parent class called Player which has a pure virtual function getNextTurn that takes the game as input and outputs the integer of the next turn
and two subclasses called HumanPlayer which takes input from the user and AiPlayer which randomly selects the column to drop the stone
