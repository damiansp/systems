/* compile: gcc -g -Wall -c file2.c */
#include "file1.h"
#include "file2.h"

static double localVar;

static float localFunction(char dummy) { return 3.14159; }

float file2pi() { return (localFunction('x')); }

// Change value of g_globalVal
void file2function() {
  g_globalVar = 42;
  localVar = 1.2345;
}
