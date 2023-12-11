#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, pair<int, int>> moves;
    int Board[3][3];

    // Initialize moves with default values
    for (int i = 0; i < 9; i++)
    {
        moves.insert({i, {i, i + 1}});
    }

    // Print the current Board
    cout << "Current Board:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }

    // Take user input for number and position
    int userNumber, userPosition;
    cout << "Enter the number to insert: ";
    cin >> userNumber;
    cout << "Enter the position to insert (0 to 8): ";
    cin >> userPosition;

    // Insert user input into the moves map
    moves[userPosition] = {userPosition, userNumber};

    // Update the Board with the new values from moves
    for (const auto &move : moves)
    {
        int key = move.first;
        int row = key / 3;
        int col = key % 3;
        Board[row][col] = move.second.second;
    }

    // Print the updated Board
    cout << "Updated Board:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << Board[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
