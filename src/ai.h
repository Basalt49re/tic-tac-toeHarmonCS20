#pragma once

#include "board.h"

class TicTacToeAI
{
public:
    TicTacToeAI(Player aiPlayer, Player opponent);
    int getBestMove(const TicTacToeBoard &board) const;

private:
    Player aiPlayer;
    Player opponent;
    struct Node
    {
        int score;
        int move;
    };
    Node minimax(const TicTacToeBoard &board, bool maximize) const;
};
