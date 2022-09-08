#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

// void Insert(int n);

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

  new = malloc(sizeof(Node));
  if (new == NULL)
  {
    free(head);
    return 1;
  }
  new->data = 2;
  new->next = NULL;
  head->next = new;

    new = malloc(sizeof(Node));
  if (new == NULL)
  {
    free(head->next);
    return 1;
  }
  new->data = 3;
  new->next = NULL;
  head->next->next = new;

  Node *curr = malloc(sizeof(Node));
  curr = head;

  while (curr->next != NULL)
  {
    printf("data: %d\n", curr->data);
    curr = curr->next;
  }
  printf("data: %d\n", curr->data);

  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("num: %d\n", num);

  new = malloc(sizeof(Node));
  if(new == NULL)
  {
    free(curr->next);
    return 1;
  }
  new->data = num;
  new->next = NULL;

  curr->next = new;
  printf("data: %d\n", new->data);


  return 0;
}

// void Insert(int n)
// {
//   printf("num: %d\n", n);
//   Node *tmp = (malloc(sizeof(Node)));
//   tmp->data = n;
//   tmp->next = NULL;
// }