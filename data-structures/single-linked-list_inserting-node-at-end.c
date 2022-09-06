#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *link;
}
node;

int main()
{
  node *a = NULL;

  // inserting a first value to the list
  node *tmp = malloc(sizeof(node));
  if (tmp == NULL)
  {
    return 1;
  }

  tmp->data = 2;
  tmp->link = NULL;
  a = tmp;
  // printf("val: %i\n", tmp->data);

  // inserting second value to the list
  tmp = malloc(sizeof(node));
  if(tmp == NULL)
  {
    free(a);
    return 1;
  }
  tmp->data = 4;
  tmp->link = NULL;

  // traversal of the list all the way to end of the list
  node *tmp1 = a;
  while(tmp1->link != NULL)
  {
    tmp1 = tmp1->link;
    // printf("Val: %i\n", tmp->data);
  }

  tmp1->link = tmp;

  // inserting a 3rd value to the list
  tmp = malloc(sizeof(node));
  tmp->data = 5;
  tmp->link = NULL;

  tmp1 = a;
  while(tmp1->link != NULL)
  {
    tmp1 = tmp1->link;
  }
  tmp1->link = tmp;
  printf("Val: %i\n", tmp->data);



  return 0;
}