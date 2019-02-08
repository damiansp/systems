/* gcc -g -Wall -o varaibles variables.c */
#include <stdio.h>


int globalInt;
float pi = 3.141596;


void someFunction() {
  int localVar = 0;
  static unsigned char aByte; // static: local but persistent
  short myShort = localVar + 500;
  globalInt = 5;
  aByte++;
  printf("\nIn someFunction():\n  aByte: %d\n  myShort: %d\n  globalInt: %d\n",
         aByte, myShort, globalInt);
}


int main(int argc, char* argv[]) {
  printf("Initially: globalInt: %d\n", globalInt);
  someFunction();
  printf("After someFunction(): globalInt: %d\n", globalInt);
  someFunction();
  printf("Assigning globalInt = 23\n");
  globalInt = 23;
  someFunction();
  return 0;
}
