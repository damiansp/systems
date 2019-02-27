#include <stdio.h>


void printAsChar(int val) { printf("%d as a char is '%c'\n", val, val); }

void printAsInt(int val) { printf("%d as an int is '%d'\n", val, val); }

void printAsHex(int val) { printf("%d as hex is '0x%x'\n", val, val); }

void printIt(int val, void (*printFunction) (int)) { (printFunction)(val); }


int main(int argc, char* argv[]) {
  int val = 42;
  printIt(val, printAsChar);
  printIt(val, printAsInt);
  printIt(val, printAsHex);
  return 0;
}
