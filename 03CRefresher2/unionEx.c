#include <stdio.h>


typedef struct Person {
  char* name;
  int age;
  char gender; // m/f
  double shoeSize;
} Person;


typedef struct Alien {
  char* designation;
  char bloodType; // Q, X, @
  int nHearts;
  short psiPower;
  short nDucks; // can be negative
} Alien;

enum {Human, NonHuman};


typedef struct Being {
  int type;
  union {
    Person person;
    Alien alien;
  } beingData;
} Being;


void fillAlien(Being* being) {
  being -> type = NonHuman;
  being -> beingData.alien.designation = "qwzzk";
  being -> beingData.alien.bloodType = 'X';
  being -> beingData.alien.nHearts = 7;
  being -> beingData.alien.psiPower = 2870;
  being -> beingData.alien.nDucks = 3;
}


void fillPerson(Being* being) {
  being -> type = Human;
  being -> beingData.person.name = "Bork";
  being -> beingData.person.age = 34;
  being -> beingData.person.gender = 'm';
  being -> beingData.person.shoeSize = 10.5;
}


void printBeing(Being* being) {
  if (being -> type == Human) {
    printf("Human:\n");
    printf("  Name:     %s\n", being -> beingData.person.name);
    printf("  Age:      %d\n", being -> beingData.person.age);
    printf("  Gender:   %c\n", being -> beingData.person.gender);
    printf("  Shoe size: %.1f\n", being -> beingData.person.shoeSize);
  } else if (being -> type == NonHuman) {
    printf("Non-Human:\n");
    printf("  Designation: %s\n", being -> beingData.alien.designation);
    printf("  Blood type:  %c\n", being -> beingData.alien.bloodType);
    printf("  No. hearts:  %d\n", being -> beingData.alien.nHearts);
    printf("  Psi power:   %d\n", being -> beingData.alien.psiPower);
    printf("  No. ducks:   %d\n", being -> beingData.alien.nDucks);
  } else { printf("Oops, bad union qualifier\n"); }
}


int main(int argc, char* argv[]) {
  Being being;
  fillAlien(&being);
  printBeing(&being);
  fillPerson(&being);
  printBeing(&being);
  return 0;
}
