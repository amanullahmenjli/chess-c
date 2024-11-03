#include "board.h"

int init_piece(char piece_code, board_t board) {
  // Rook | Bishop | Knight
  if (piece_code >= 1 && piece_code <= 3) {
    // White
    board[0][piece_code - 1] = 10 * piece_code;
    board[0][8 - piece_code] = 10 * piece_code;

    // Black
    board[7][piece_code - 1] = 10 * piece_code + 1;
    board[7][8 - piece_code] = 10 * piece_code + 1;

    return 0;
  }
  // King | Queen
  else if (piece_code >= 4 && piece_code <= 5) {
    // White
    board[0][piece_code - 1] = 10 * piece_code;
    // Black
    board[7][piece_code - 1] = 10 * piece_code + 1;

    return 0;
  }
  // Pawns
  else if (piece_code == 6) {
    for (int i = 0; i < 8; i++) {
      // White
      board[1][i] = 60;
      // Black
      board[6][i] = 61;
    }

    return 0;
  }
  // Invalid code
  else {
    return -1;
  }
}

int init(board_t board) {
  init_piece(1, board); // Rook
  init_piece(2, board); // Bishop
  init_piece(3, board); // Knight
  init_piece(4, board); // Queen
  init_piece(5, board); // King
  init_piece(6, board); // Pawn

  // Empty squares
  for (int i = 3; i < 6; i++) {
    for (int j = 0; j < 8; j++) {
      board[i][j] = 0;
    }
  }
  return 0;
}
