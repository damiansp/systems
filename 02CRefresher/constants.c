/* gcc -g -o constants constants.c */
#include <stdio.h>


int main(int argc, char* argv[]) {
  printf("Some integers: %d %d %d %d\n", 1, 3, 12345, -9876);
  printf("Some floats: %f %f %f %f\n", 1.1, 2.12, 3.123, 4.1234);
  printf("Some characters: %c %c %c %c %c\n", 'w', 'P', '\114', '\125', '\107');
  printf("And some strings, %s %s\n", "like this one", "and this one");
  return 0;
}
