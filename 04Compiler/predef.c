/* Compiler pre-defined macros */
#include <stdio.h>


void someFunc() {
  printf("file %s, line %d, function %s\n", __FILE__, __LINE__, __FUNCTION__);
}


int main(int argc, char** argv) {
  printf("__APPLE__: %d, __APPLE_CC__: %d\n", __APPLE__, __APPLE_CC__);
  printf("Date: %s\nTime: %s\n", __DATE__, __TIME__);
  printf("File: %s, line: %d, function: %s\n",
         __FILE__, __LINE__, __FUNCTION__);
  someFunc();
  return 0;
}
