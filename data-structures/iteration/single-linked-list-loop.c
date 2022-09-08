#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
} 
Node;

int main()
{
  Node *head = NULL;

  Node *new = malloc(sizeof(Node));
  if(new == NULL)
  {
    return 1;
  }
  new->data = 1;
  new->next = NULL;

  head = new;
  // printf("data: %d\n", new->data);

  new = malloc(sizeof(Node));
  if(new == NULL)
  {
    free(head);
    return 1;
  }
  new->data = 2;
  new->next = NULL;
  head->next = new;

  new = malloc(sizeof(Node));
  if(new == NULL)
  {
    free(head->next);
    return 1;
  }
  new->data = 3;
  new->next = NULL;
  head->next->next = new;

  // printf("data: %d\n", new->data);

  Node *curr = malloc(sizeof(Node));
  curr = head;

  /////////////// While loop ///////////////////
  // while(curr->next != NULL)
  // {
  //   printf("data: %d\n", curr->data);
  //   curr = curr->next;
  // }
  // printf("data: %d\n", curr->data);

  /////////////// for loop ///////////////////
  for (curr; curr != NULL; curr = curr->next)
  {
    printf("data: %d\n", curr->data);
  }
  printf("data: %d\n", curr->data);

  free(head->next->next);
  free(head->next);
  free(head);

}