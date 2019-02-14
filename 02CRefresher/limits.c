// info about built-in data types
/* gcc -g -Wall -o limits limits.c */
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
  printf("      type: bytes %14s %14s %14s\n",
         "min value", "max value", "max unsigned");
  printf("      char: %5ld %14d %14d %14u\n",
         sizeof(char), CHAR_MIN, CHAR_MAX, UCHAR_MAX);
  printf("     short: %5ld %14d %14d %14u\n",
         sizeof(short), SHRT_MIN, SHRT_MAX, USHRT_MAX);
  printf("       int: %5ld %14d %14d %14u\n",
         sizeof(int), INT_MIN, INT_MAX, UINT_MAX);
  printf("      long: %5ld %14ld %14ld %14lu\n",
         sizeof(long), LONG_MIN, LONG_MAX, ULONG_MAX);
#ifdef LLONG_MIN
  printf(" long long: %5ld %20lld %20lld \n",
         "                 %20llu\n",
         sizeof(long long), LLONG_MIN, LLONG_MAX, (long long) ULLONG_MAX);
#endif
  printf("     float: %5ld\n", sizeof(float));
  printf("    double: %5ld\n", sizeof(double));
  return(EXIT_SUCCESS);
}
