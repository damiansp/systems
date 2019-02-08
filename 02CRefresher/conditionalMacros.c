// Conditional compilation
/* cc -g -Wall -o conditionaMacros conditionalMacros.c */
#include <stdio.h>


int main(int argc, char* argv[]) {
#define THING1
#ifdef THING1
  printf("thing1 defined\n");
#else
  printf("thing1 not defined\n");
#endif
  
#ifdef THING2
  printf("thing2 defined\n");
#else
  printf("thing2 not defined\n");
#endif
  return 0;
}
