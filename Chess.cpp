#include <iostream>
#include <string>
#include <cctype>
using namespace std;

const int BOARD_SIZE = 8;
char board[BOARD_SIZE][BOARD_SIZE];

// Initialize board with pieces
void initializeBoard() {
    string backRow = "RNBQKBNR";
    for (int i = 0; i < BOARD_SIZE; i++) {
        board[0][i] = backRow[i];         // White back row
        board[1][i] = 'P';                // White pawns
        board[6][i] = 'p';                // Black pawns
        board[7][i] = tolower(backRow[i]); // Black back row
    }
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '.'; // Empty squares
        }
    }
}

// Display the board
void printBoard() {
    cout << "  a b c d e f g h\n";
    for (int i = 0; i < BOARD_SIZE; i++) {
        cout << 8 - i << " ";
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << 8 - i << "\n";
    }
    cout << "  a b c d e f g h\n";
}

// Convert algebraic notation (e.g., "e2") to array index
pair<int, int> parsePosition(string pos) {
    int row = 8 - (pos[1] - '0');
    int col = pos[0] - 'a';
    return {row, col};
}

// Move a piece from source to destination
bool movePiece(string from, string to) {
    pair<int, int> fromPos = parsePosition(from);
       int fromRow = fromPos.first;
       int fromCol = fromPos.second;

    pair<int, int> toPos = parsePosition(to);
       int toRow = toPos.first;
       int toCol = toPos.second;

    if (fromRow < 0 || fromRow >= BOARD_SIZE || fromCol < 0 || fromCol >= BOARD_SIZE ||
        toRow < 0 || toRow >= BOARD_SIZE || toCol < 0 || toCol >= BOARD_SIZE) {
        cout << "Invalid position!\n";
        return false;
    }

    if (board[fromRow][fromCol] == '.') {
        cout << "No piece at source position!\n";
        return false;
    }

    board[toRow][toCol] = board[fromRow][fromCol];
    board[fromRow][fromCol] = '.';
    return true;
}

int main() {
    initializeBoard();
    string from, to;
    bool whiteTurn = true;

    while (true) {
        printBoard();
        cout << (whiteTurn ? "White" : "Black") << "'s move (e.g., e2 e4): ";
        cin >> from >> to;

        if (from == "exit" || to == "exit") {
            cout << "Game exited.\n";
            break;
        }

        if (movePiece(from, to)) {
            whiteTurn = !whiteTurn;
        } else {
            cout << "Invalid move, try again.\n";
        }
    }

    return 0;
}