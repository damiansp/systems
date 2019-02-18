// Program split over multiple files
/* compile: gcc -g -Wall -c file1.c */
/* link: gcc -o multifile file1.o file2.o */

#include <stdio.h>

#include "file1.h"
#include "file2.h"

static int localVar;
int g_globalVar;


static void localFunction() {
  printf("This is file1's localFunction()");
  printf("No args passed. localVar is %d\n", localVar);
}

int main(int argc, char* argv[]) {
  float pi;
  localFunction();
  pi = file2pi();
  localVar = 23;
  g_globalVar = 23;
  printf("g_globalVar is %d\n", g_globalVar);
  printf("localVar is %d\n", localVar);
  file2function();
  printf("g_globalVar was changed to %d\n", g_globalVar);
  printf("localVar is still %d\n", localVar);
  return 0;
}
