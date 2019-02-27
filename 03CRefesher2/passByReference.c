/* gcc -g -Wall -o passByReference passByReference.c */
#include <stdio.h>


void addEmUp(int a, int b, int* result) {
  *result = a + b;
}


int main(int argc, char* argv[]) {
  int answer;
  addEmUp(1, 2, &answer);
  printf("1 + 2 = %d\n", answer);
  return 0;
}
