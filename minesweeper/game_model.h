#ifndef GAMEMODEL_H
#define GAMEMODEL_H


#include <vector>

enum BlockState
{
    UN_DIG,
    DIGGED,
    MARKED,
    BOMB,
    WRONG_BOMB
};

struct MineBlock
{
    BlockState curState;
    int valueFlag;
};

enum GameState
{
    PLAYING,
    FAULT,
    OVER,
    WIN
};

enum GameLevel
{
    EASY,
    MEDIUM,
    HARD,
    CUSTOM
};

const int kRow = 10;
const int kCol = 10;
const int kMineCount = 10;
const int kTime = 0;
// ----------------------------------------------- //

class GameModel
{
public:
    GameModel();
    virtual ~GameModel();
public:
    void digMine(int m, int n); // what happens after clicking a block
    void markMine(int m, int n); // flags a block
    void createGame(int row = kRow, int col = kCol, int mineCount = kMineCount, GameLevel level = EASY); // creates a level of game
    void restartGame();
    void checkGame();
public:
    std::vector<std::vector<MineBlock>> gameMap; // vector of a mineblock struct named gamemap
    int mRow;
    int mCol;
    int totalMineNumber;
    int curMineNumber; // for flaging blocks and counting remaining bombs
    int timerSeconds;

    GameState gameState;
    GameLevel gameLevel;
};

#endif // GAMEMODEL_H
