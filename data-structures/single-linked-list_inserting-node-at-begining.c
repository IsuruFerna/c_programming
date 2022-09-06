#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

struct Node *head; // Global variable, can be accesed anywhere

void Insert(int x);

void Print();

int main()
{
  head = NULL; // Empty list
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the number \n");
    scanf("%d", &x);
    Insert(x);
    Print();
  }


}

void Insert(int x)
{
  Node *tmp = malloc(sizeof(Node));
  tmp->data = x;
  // tmp->next = NULL;
  tmp->next = head;
  head = tmp;
}

void Print()
{
  struct Node *tmp = head;
  printf("List is: ");
  while(tmp != NULL)
  {
    printf(" %d", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}