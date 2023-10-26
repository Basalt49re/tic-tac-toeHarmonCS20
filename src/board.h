#pragma once

#include <array>

enum Player
{
    NONE,
    X,
    O
};

char playerToChar(Player p);

class TicTacToeBoard
{

public:
    static const int SPACES = 9;

    TicTacToeBoard();

    void print() const;

    bool isValidMove(int move) const;

    void move(Player player, int move);

    bool isGameOver() const;

    bool isTie() const;

    bool hasPlayerWon(Player player) const;

    class InvalidMove
    {
    };
    class InvalidPlayer
    {
    };

private:
    static const int ROWS = 3;
    static const int COLUMNS = 3;
    std::array<Player, SPACES> board;
};
