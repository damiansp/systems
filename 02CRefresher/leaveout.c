// Use the preprocessor to comment out a chunk of code
/* gcc -g -Wall -o leaveout leaveout.c */
#include <stdio.h>


int main(int argc, char* argv[]) {
#if 0
  printf("Oh happy day\n");
  printf("Bork! Bork bork!\n");
  can even have synax errors here since compiler never sees this part :);
#endif

#if 1
  printf("This is included.  Wheeeee!\n");
#endif
  printf("That's all, folks!\n");
  return 0;
}
