// Exploring preprocessor macros
/* cc -g Wall -o macros macros.c */

#include <stdio.h>

#define PI 3.1415926
#define VERSION "beta5"
#define SQUARE(x) ((x) * (x))
#define AREA_OF_CIRCLE(r) (PI * SQUARE(r))


int main(int argc, char* argv[]) {
  printf("Welcome to version %s of macros\n", VERSION);
  printf("The area of a circle with radius 5 is %f\n", AREA_OF_CIRCLE(5));
  return 0;
}
