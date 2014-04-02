
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;


class Board
{
    vector< vector<char> > board;

public:
    Board(int BOARD_LEN = 4)
    :board(vector< vector<char> > (BOARD_LEN, vector<char> (BOARD_LEN, 'X')))
    {}

    void print()
    {
        for(int i = 0; i < board.size(); ++i)
        {
            for(int j = 0; j < board.at(i).size(); ++j)
                cout << board.at(i).at(j);
            cout << endl;
        }
    }

};

