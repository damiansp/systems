// Simple first C program
/* compile with
 * cc -g -Wall -o first first.c [-lm]
 */
#include <stdio.h> // printf
#include <math.h>  // cos


int main(int argc, char* argv[]) {
  printf("cos(1) = %g\n", cos(1.0));
  printf("That's all. Have a good day!\n");
  return(0);
}
