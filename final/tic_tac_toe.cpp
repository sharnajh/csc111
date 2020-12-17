// Sharna Hossain
// CSC 111
// Final Project | tic_tac_toe.cpp

#include <iostream>
#include <iomanip>
using namespace std;

void print_board(char[3][3]);
char check_winner(char[3][3]);

int main()
{
    // Initialize Values
    char board[3][3];
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
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
            } while (row > 3 || row < 0);
            do
            {
                cout << "Column (1-3): ";
                cin >> col;
            } while (col > 3 || col < 0);

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
    } while (moves < 9 && !winner);

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

char check_winner(char board[3][3])
{
    char current = '\0';
    // Check Horizontally
    for (int r = 0; r < 3; r++)
    {
        current = board[r][0];
        for (int c = 1; c < 3; c++)
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
    for (int c = 0; c < 3; c++)
    {
        current = board[0][c];
        for (int r = 1; r < 3; r++)
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
    for (int r = 0; r < 3; r++)
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

    for (int r = 2; r >= 0; r--)
    {
        current = board[2][0];
        if (current != board[r][2 - r] || board[r][2 - r] == ' ')
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

void print_board(char board[3][3])
{
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << setw(4) << ' ';
            cout << setw(4) << (c == 2 ? "" : "|");
        }
        cout << "\n";
        for (int c = 0; c < 3; c++)
        {
            cout << setw(4) << board[r][c];
            cout << setw(4) << (c == 2 ? "" : "|");
        }
        cout << "\n";
        if (r != 2)
        {
            for (int c = 0; c < 3; c++)
            {
                cout << "_______" << (c == 2 ? "" : "|");
            }
        }
        else
        {
            for (int c = 0; c < 3; c++)
            {
                cout << setw(4) << ' ';
                cout << setw(4) << (c == 2 ? "" : "|");
            }
        }
        cout << "\n";
    }
}