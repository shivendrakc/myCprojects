#include <stdio.h>

int main() {
    char board[8][8];
    
    // Initialize the board with starting positions of pieces
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i == 0 || i == 7) {
                // Add the pieces in the back row
                switch (j) {
                    case 0:
                    case 7:
                        board[i][j] = 'R';
                        break;
                    case 1:
                    case 6:
                        board[i][j] = 'N';
                        break;
                    case 2:
                    case 5:
                        board[i][j] = 'B';
                        break;
                    case 3:
                        board[i][j] = 'Q';
                        break;
                    case 4:
                        board[i][j] = 'K';
                        break;
                }
            } else if (i == 1 || i == 6) {
                // Add the pawns in the second-to-last and second rows
                board[i][j] = 'P';
            } else {
                // Add empty spaces in the other rows
                board[i][j] = ' ';
            }
            
            // Add dots for black squares
            if ((i + j) % 2 == 1) {
                board[i][j] = '.';
            }
        }
    }
    
    // Print the chess board
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
