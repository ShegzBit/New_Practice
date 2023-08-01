#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>

#define b(x) board[x]
#define r char(role)
#define createPlayer(X, R, P) Player X(R); X.SetPlay(P)

//create a class player
class Player
{
private:
    //enum Role to pick which role X or O
    char role; 
    int plays;

public:

    // Constructor to initialize role and plays: the number of time a player has played

    Player(char x)
    {
        role = x;
    }
    
    //sets the plays
    void SetPlay(int x)
    {
        plays = x;
    }

    //JustPlay updates the plays for each time a player has "JustPlayed" using makemove
    void JustPlay(Player opp)
    {
        plays++;
        opp.plays--;
    }
    int getPlay()
    {
        return(plays);
    }

    /**return true if player is eligible to play by checking if their plays states that it's their turn and if they entered a valid position
     * if 1 is returned success
     * if -1 not player's turn
     * if 0 invalid position
     */
    int playForce(int position, char board[])
    {
        if ((position >= 1 && position <= 9) && (board[position] != 'X' && board[position] != 'O'))
        {
            return (1);
        }

        else if(!(position >= 1 && position <= 9))
        {
            return(0);
        }
        return (-2);
    }
    // makes move for the player by getting positions board and oppnonent(opp)
    int makeMove(int position, char board[], Player opp)
    {
        if (playForce(position, board) == 1)
        {
            board[position - 1] = char(role);
            JustPlay(opp);
            std::cout << "Hey bro, playForce returned: " << playForce(position, board) << std::endl;
            return(1);
        }
        else if (playForce(position, board) == -1)
        {
            std::cout << "Please wait, it is not your turn to play yet" << std::endl;
            std::cout << "Hey bro, playForce returned: " << playForce(position, board) << std::endl;
            return(-1);
        }
        else if (playForce(position, board) == 0)
        {
            std::cout << "Hey bro, playForce returned: " << playForce(position, board) << std::endl;
            std::cout << "invalid position pls try again" << std::endl;
            std::cout << "Enter position :" << std::endl;
            std::cin >> position;
            makeMove(position, board, opp);
            return(0);
        }
        else
        {
            std::cout << "Hey bro, playForce returned: " << playForce(position, board) << std::endl;
            std::cout << " There was a rare error please try again" << std::endl;

        }
        playerWins(board);
        return(-2);
    }

    /** note to reduce repititon i created a
     * macro b(x) which expands to board[x]
     * macro r which expands to char(role)
     * this-> function checks if you're a player won by comparing every win case to the current state on the board
    */
    void playerWins(char board[])
    {
        if (b(0) == r && b(1) == r && b(2) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(0) == r && b(3) == r && b(6) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(0) == r && b(4) == r && b(8) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(3) == r && b(4) == r && b(5) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(6) == r && b(7) == r && b(8) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(1) == r && b(4) == r && b(7) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(2) == r && b(5) == r && b(8) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
        else if (b(2) == r && b(4) == r && b(6) == r)
        {
            std::cout << "Player " << r << "wins" << std::endl;
            exit(0);
        }
    }

};

void drawBoard(char board[]);
void Compile(char board[], Player opp);


#endif