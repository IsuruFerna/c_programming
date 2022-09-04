#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
  char name[50];
  char majour[50];
  int age;
  double gbp;
};

int main ()
{

  struct Student student1;
  student1.age = 22;
  student1.gbp = 3.2;
  strcpy(student1.name, "Jim");
  strcpy(student1.majour, "Bussines");

  struct Student student2;
  student1.age = 20;
  student1.gbp = 3.2;
  strcpy(student1.name, "Tom");
  strcpy(student1.majour, "IT");

  printf("%s", student1.name);
  printf("%s", student2.name);
  
  return 0;
}
