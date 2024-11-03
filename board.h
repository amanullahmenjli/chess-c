/*
 * This file contains types and function headers related to the game board.
 *
 * Pieces are represented by numbers from 1 to 6 while an empty square is
 * represented by a 0.
 *
 * Pawn --> 6
 * Knight --> 3
 * Bishop --> 2
 * Rook --> 1
 * King --> 6
 * Queen --> 5
 *
 * The color of the piece is represented by the second column as:
 * 1 is white
 * 0 is black
 *
 * For example, a black pawn is represented by the number 10 and a white rook is
 * represented by the number 41.
 *
 * The type char is chosen to minimize memory usage.
 */

// Define the type for the game board
typedef char board_t[8][8];

// Define the function to initialize the board
int init(board_t board);
