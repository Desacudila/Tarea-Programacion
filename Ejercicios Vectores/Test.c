#include <stdio.h>
#include <stdlib.h>

int main () {

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define RESET "\x1B[0m"

    system("cls");

  printf(RED "red\n"     RESET);
  printf(GRN "green\n"   RESET);

    system("pause");

    return 0;
}