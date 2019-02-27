/* gcc -g -Wall -o structPointer structPointer.c */
#include <stdio.h>


struct Person {
  char* name;
  int age;
  char gender; /* 'm' or 'f' */
  double shoeSize;
};

typedef struct Person Person;

void populatePerson(Person* person) {
  person -> name = "Damian";
  person -> age = 42;
  person -> gender = 'm';
  person -> shoeSize = 10.5;
}


/* a -> b is shorthand for (*a).b */
void printPerson(Person* person) {
  printf("Name:      %s\n", person -> name);
  printf("Age:       %d\n", person -> age);
  printf("Gender:    %s\n", (person -> gender == 'm') ? "male" : "female");
  printf("Shoe size: %.2f\n", person -> shoeSize);
}

int main(int argc, char* argv[]) {
  Person me;
  populatePerson(&me);
  printPerson(&me);
  return 0;
}
