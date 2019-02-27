#include <stdio.h>

int main(int argc, char* argv[]) {
  char* myString = "This is my string.";
  int length = 0;
  while (*myString++) length++;
  printf("The length of myString is %d\n", length);
  return 0;
}
