struct PackedPerson {
  char* name;
  unsigned int age: 7; // 0 - 127
  unsigned int isFemale: 1; // 0 - 1
  unsigned int shoeSize: 4; // 0 - 16
  unsigned int pad: 2;
  unsigned int shoeSizeFraction: 1; // if half-size
}
