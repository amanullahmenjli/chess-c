#include "board.h"
#include <stdio.h>

char rook[] = "   ";
char bishop[] = "   ";
char knight[] = "   ";
char queen[] = "   ";
char king[] = "   ";
char pawn[] = "   ";

void render_square(int line, int column, char piece_code) {
  int bg;
  int fg;
  if (line % 2 == 0) {
    if (column % 2 == 1) {
      bg = 65;
    } else {
      bg = 108;
    }
  } else {
    if (column % 2 == 1) {
      bg = 108;
    } else {
      bg = 65;
    }
  }

  if (piece_code % 10 == 1)
    fg = 255;
  else
    fg = 237;

  if (piece_code / 10 == 1)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, rook);
  else if (piece_code / 10 == 2)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, bishop);
  else if (piece_code / 10 == 3)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, knight);
  else if (piece_code / 10 == 4)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, queen);
  else if (piece_code / 10 == 5)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, king);
  else if (piece_code / 10 == 6)
    printf("\033[48;5;%dm\033[38;5;%dm%s\033[0;0m", bg, fg, pawn);
  else if (piece_code / 10 == 0)
    printf("\033[48;5;%dm    \033[m", bg);
}

void render(board_t board) {
  printf("\e[1;1H\e[2J");
  printf("\n");
  for (int i = 0; i < 8; i++) {

    for (int j = 0; j < 8; j++) {
      render_square(i, j, board[i][j]);
    }

    printf("\n");
  }
}
