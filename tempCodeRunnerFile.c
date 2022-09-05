#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int age = 30;
  double gpa = 3.4;
  char grade = 'A';

  printf(" age: %p\n gpa: %p grade: %p\n", &age);
  return 0;
}
