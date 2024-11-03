#include "board.h"
#include "render_board.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  board_t board;

  init(board);

  render(board);
  return 0;
}

/*
void print_256_colours_txt() {
  for (int i = 0; i < 256; i++) {
    if (i % 16 == 0 && i != 0)
      printf("\n\n");
    if (i % 2 == 0) {
      printf("\033[48;5;7m   \033[m");
    } else {
      printf("\033[48;5;0m   \033[m");
    }
  }
}

int main(int argc, char *argv[]) {
  // char kn[] = "ESC[43;ESC[m";
  // printf("%s\n", kn);
  print_256_colours_txt();
  return 0;
}
*/
