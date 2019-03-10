/* cc -g -Wall -i multilineMacro multilineMacro.c */
#include <stdio.h>

#define FOUND_AN_ERROR(desc) \
  errorCount++; \
  fprintf(stderr, \
          "found an error '%s' at file %s, line %d\n", \
          desc, \
          __FILE__, \
          __LINE__);

int errorCount;

int main(int argc, char* argv[]) {
  if (argc == 2) {
    FOUND_AN_ERROR("something bad happened");
  }
  printf("Done.\n");
  return 0;
}
