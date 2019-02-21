/* gcc -g -Wall -o bitmask bitmask.c */
#include <stdio.h>

#define THING_1_MASK 1                                          // 00000001
#define THING_2_MASK 2                                          // 00000010
#define THING_3_MASK 4                                          // 00000100
#define ALL_THINGS (THING_1_MASK | THING_2_MASK | THING_3_MASK) // 00000111
#define ANOTHER_MASK (1 << 5)                                   // 00100000
#define ANOTHER_MASK_2 (1 << 6)                                 // 01000000
#define ALL_ANOTHERS (ANOTHER_MASK | ANOTHER_MASK_2)            // 01100000
#define ALL_USEFUL_BITS (ALL_THINGS | ALL_ANOTHERS)             // 01100111


void showMaskVal(int val) {
  printf("\n");
  printf("value %x:\n", val);
  if (val & THING_1_MASK) printf("   THING_1\n");
  if (val & THING_2_MASK) printf("   THING_2\n");
  if (val & THING_3_MASK) printf("   THING_3\n");
  if (val & ANOTHER_MASK) printf("   ANOTHER_MASK\n");
  if (val & ANOTHER_MASK_2) printf("   ANOTHER_MASK_2\n");
  if ((val & ALL_ANOTHERS) == ALL_ANOTHERS) printf("   ALL_ANOTHERS\n");
}


int setBits(int val, int maskVal) {
  // set bit by OR-ing in a val
  val |= maskVal;
  return val;
}


int clearBits(int val, int maskVal) {
  // to clear x: x & ~x
  val &= ~maskVal;
  return val;
}


int main(int argc, char* argv[]) {
  int intVal = 0;
  intVal = setBits(intVal, THING_1_MASK); // 00000001: 1
  intVal = setBits(intVal, THING_3_MASK); // 00000101: 5
  showMaskVal(intVal);
  intVal = setBits(intVal, ALL_ANOTHERS);   // 01100101: 65
  intVal = clearBits(intVal, THING_2_MASK); // 01100101: 65
  intVal = clearBits(intVal, THING_3_MASK); // 01100001: 61
  showMaskVal(intVal);
  return 0;
}
