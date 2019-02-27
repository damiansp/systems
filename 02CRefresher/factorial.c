#include <stdio.h>


long long factorial(long long n) {
  if (n == 1) return 1;
  else return n*factorial(n - 1);
}


int main(int argc, char* argv[]) {
  printf("16! = %11d\n", factorial(16));
  return 0;
}
