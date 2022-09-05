#include <stdio.h>
#include <stdlib.h>

int main ()
{
  FILE *fpointer = fopen("employees.tex", "a");

  // r: to read files
  // w: to write files
  // a: to append information on the file

  fprintf(fpointer, "\nKelly, Customer Service");

  fclose(fpointer);
  return 0;
}
