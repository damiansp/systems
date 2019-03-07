// vararg demo
#include <stdio.h>
#include <stdarg.h>


// Sum all ints passed in; stop if 0
int sumArgs(int firstNum, ...) {
  va_list args;
  int sum = firstNum;
  int n;
  
  va_start (args, firstNum);
  while (1) {
    n = va_arg (args, int);
    sum += n;
    if (n == 0) break;
  }
  va_end (args);
  return sum;
}


int main(int argc, char* argv[]) {
  int sum = sumArgs(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);
  printf("Sum(1..9) = %d\n", sum);
  sum = sumArgs(1, 3, 5, 7, 9, 11, 0);
  printf("Sum of odd 1..11 = %d\n", sum);
  return 0;
}
