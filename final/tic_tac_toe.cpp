// Sharna Hossain
// CSC 111
// Final Project | tic_tac_toe.cpp

#include <iostream>
#include <iomanip>
using namespace std;

// Global Variables
// This would normally be a local variable within
// main() but for the sake of this project it is global.
const int ROWS = 3, COLUMNS = 3;

void print_board(char[ROWS][COLUMNS]);
char check_winner(char[ROWS][COLUMNS]);

int main()
{
    // Initialize Values
    char board[ROWS][COLUMNS];
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLUMNS; c++)
        {
            board[r][c] = ' ';
        }
    }
    int moves = 0;
    bool player = true;
    char winner = '\0';

    // Game
    do
    {
        print_board(board);

        // Initialize Values
        int col, row;
        char player_val = player ? 'X' : 'O';

        // Get Player Move
        do
        {
            cout << "Player " << player_val << " Move: \n";
            do
            {
                cout << "Row (1-3): ";
                cin >> row;
            } while (row > ROWS || row < 0);
            do
            {
                cout << "Column (1-3): ";
                cin >> col;
            } while (col > COLUMNS || col < 0);

            if (board[row - 1][col - 1] != ' ')
            {
                cout << "That move has already been played. ";
                cout << "Choose another.\n";
            }
        } while (board[row - 1][col - 1] != ' ');

        // Update Values
        board[row - 1][col - 1] = player_val;
        player = !player;
        moves++;

        // Check Winner
        winner = check_winner(board);
    } while (moves < (ROWS * COLUMNS) && !winner);

    // End Game
    print_board(board);
    if (winner)
    {
        cout << "Winner is Player " << winner << "!";
    }
    else
    {
        cout << "It's a tie!";
    }

    return 0;
}

char check_winner(char board[ROWS][COLUMNS])
{
    char current = '\0';

    // Check Horizontally
    for (int r = 0; r < ROWS; r++)
    {
        current = board[r][0];
        for (int c = 1; c < COLUMNS; c++)
        {
            if (current != board[r][c] || board[r][c] == ' ')
            {
                current = '\0';
                break;
            }
        }
        if (current)
            return current;
    }

    // Check Vertically
    for (int c = 0; c < COLUMNS; c++)
    {
        current = board[0][ROWS];
        for (int r = 1; r < ROWS; r++)
        {
            if (current != board[r][c] || board[r][c] == ' ')
            {
                current = '\0';
                break;
            }
        }
        if (current)
            return current;
    }

    // Check Diagonally
    for (int r = 0; r < ROWS; r++)
    {
        current = board[0][0];
        if (current != board[r][r] || board[r][r] == ' ')
        {
            current = '\0';
            break;
        }
    }
    if (current)
        return current;

    for (int r = ROWS - 1; r >= 0; r--)
    {
        current = board[2][0];
        if (current != board[r][ROWS - r - 1] || board[r][ROWS - r - 1] == ' ')
        {
            current = '\0';
            break;
        }
    }
    if (current)
        return current;

    // Default
    return current;
}

void print_board(char board[ROWS][COLUMNS])
{
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLUMNS; c++)
        {
            cout << setw(4) << ' ';
            cout << setw(4) << (c == COLUMNS - 1 ? "" : "|");
        }
        cout << "\n";
        for (int c = 0; c < COLUMNS; c++)
        {
            cout << setw(4) << board[r][c];
            cout << setw(4) << ((c == COLUMNS - 1) ? "" : "|");
        }
        cout << "\n";
        if (r != 2)
        {
            for (int c = 0; c < COLUMNS; c++)
            {
                cout << "_______" << ((c == COLUMNS - 1) ? "" : "|");
            }
        }
        else
        {
            for (int c = 0; c < COLUMNS; c++)
            {
                cout << setw(4) << ' ';
                cout << setw(4) << ((c == COLUMNS - 1) ? "" : "|");
            }
        }
        cout << "\n";
    }
}