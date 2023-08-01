#include "main.hpp"

void drawBoard(char board[])
{
    for(int i = 0; i < 9;)
    {
        std::cout <<"| " << b(i) << " || " << b(++i) << " || " << b(++i) << " |" << std::endl;
        if(i == 8)
        {
            break;
        }
    }
    std::cout << "Board drawn successfully" << std::endl;
}