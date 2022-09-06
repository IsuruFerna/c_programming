#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

Node *Insert(Node *head, int x);
void Print();

int main()
{
  Node *head = NULL; // Empty list
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the number \n");
    scanf("%d", &x);
    head = Insert(head, x);
    Print(head);
  }


}

Node *Insert(Node *head, int x)
{
  Node *tmp = malloc(sizeof(Node));
  tmp->data = x;
  tmp->next = NULL;
  if(head != NULL) tmp->next = head;
  head = tmp;
  return head;
}

void Print(Node *head)
{
  printf("List is: ");
  while(head != NULL)
  {
    printf(" %d", head->data);
    head = head->next;
  }
  printf("\n");
}