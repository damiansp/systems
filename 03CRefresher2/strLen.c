/* Calculate the length of a C String
 * gcc -g -Wall -o strLen strLen.c
 */

#include <stdio.h>

int main(int argc, char* argv[]) {
  char* myString = "this is a sequence of chars";
  int length = 0;
  while (*myString != '\0') {
    length++;
    myString++;
  }
  printf("The length of myString is %d\n", length);
  return 0;
}
