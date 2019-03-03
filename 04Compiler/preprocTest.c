/** gcc -g -Wall -o preprocTest preprocTest.c
 *  or
 *  gcc -Wall -E preprocTest.c > junk.i
 */
#include <stdio.h>
#define BUFFER_SIZE 2048


int main(int argc, char* argv[]) {
  char buffer[BUFFER_SIZE]; /* a comment */
  char* thing;

  thing = fgets(buffer, BUFFER_SIZE, stdin);
  printf("%s", thing);
  /* anudder comment */
  return 0;
}
