#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}
node;


int main()
{
  node *head = NULL; 
  
  node *new = malloc(sizeof(node));
  if(new == NULL)
  {
    return 1;
  }
  new->data = 1;
  new->next = NULL;

  head = new;
  printf("data: %d\n", new->data);

  new = malloc(sizeof(node));
  if(new == NULL)
  {
    free(new);
    return 1;
  }
  new->data = 2;
  new->next = NULL;
  head->next = new;

  printf("data: %d\n", new->data);

  new = malloc(sizeof(node));
  if(new == NULL)
  {
    free(head->next);
    return 1;
  }
  new->data = 3;
  new->next = NULL;
  head->next->next = new;

  printf("data: %d\n", new->data);

  free(head->next->next);
  free(head->next);
  free(head);
}