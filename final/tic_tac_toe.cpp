// Sharna Hossain
// CSC 111
// Final Project | tic_tac_toe.cpp

#include <iostream>
#include <iomanip>
using namespace std;

// Global Variables
// This program will work with any size!
// Keeping it as a global variable for the
// sake of this project.
const int SIZE = 4;

void print_board(char[SIZE][SIZE]);
char check_winner(char[SIZE][SIZE]);

int main()
{
    // Initialize Values
    char board[SIZE][SIZE];
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
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
            } while (row > SIZE || row < 0);
            do
            {
                cout << "Column (1-3): ";
                cin >> col;
            } while (col > SIZE || col < 0);

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
    } while (moves < (SIZE * SIZE) && !winner);

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

char check_winner(char board[SIZE][SIZE])
{
    char current = '\0';

    // Check Horizontally
    for (int r = 0; r < SIZE; r++)
    {
        current = board[r][0];
        for (int c = 1; c < SIZE; c++)
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
    for (int c = 0; c < SIZE; c++)
    {
        current = board[0][SIZE];
        for (int r = 1; r < SIZE; r++)
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
    for (int r = 0; r < SIZE; r++)
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

    for (int r = SIZE - 1; r >= 0; r--)
    {
        current = board[2][0];
        if (current != board[r][SIZE - r - 1] || board[r][SIZE - r - 1] == ' ')
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

void print_board(char board[SIZE][SIZE])
{
    for (int r = 0; r < SIZE; r++)
    {
        for (int c = 0; c < SIZE; c++)
        {
            cout << setw(4) << ' ';
            cout << setw(4) << (c == SIZE - 1 ? "" : "|");
        }
        cout << "\n";
        for (int c = 0; c < SIZE; c++)
        {
            cout << setw(4) << board[r][c];
            cout << setw(4) << ((c == SIZE - 1) ? "" : "|");
        }
        cout << "\n";
        if (r != SIZE - 1)
        {
            for (int c = 0; c < SIZE; c++)
            {
                cout << "_______" << ((c == SIZE - 1) ? "" : "|");
            }
        }
        else
        {
            for (int c = 0; c < SIZE; c++)
            {
                cout << setw(4) << ' ';
                cout << setw(4) << ((c == SIZE - 1) ? "" : "|");
            }
        }
        cout << "\n";
    }
}