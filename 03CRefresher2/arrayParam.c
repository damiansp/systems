#include <stdio.h>


void printArray(int* array, int length) {
  for (int i = 0; i < length; i++) printf("%d: %d\n", i, array[i]);
}


int main(int argc, char* argv[]) {
  int arr1[5];
  int arr2[] = {23, 52, 45};
  for (int i = 0; i < 5; i++) arr1[i] = i;
  printf("Array 1:\n");
  printArray(arr1, 5);
  printf("\nArray 2:\n");
  printArray(arr2, sizeof(arr2) / sizeof(int));
  return 0;
}
