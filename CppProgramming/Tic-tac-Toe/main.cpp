#include "main.hpp"

int main()
{
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    drawBoard(board);
    createPlayer(X, 'X', 1);
    createPlayer(O, 'O', 0);
    O.makeMove(2, board, X);
    std::cout << O.getPlay() <<" plays used" << std::endl;
    drawBoard(board);
    X.makeMove(1, board, O);
    std::cout << X.getPlay() <<" plays used" << std::endl;
    drawBoard(board);
}