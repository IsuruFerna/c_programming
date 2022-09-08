#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

void Insert(int x);
void Print();

Node *head = NULL;

int main() 
{

  int n, i, x;
  printf("How many numbers? ");
  scanf("%d", &n);

  for(i = 0; i < n; i++)
  {
    printf("Insert a number: ");
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
  // if(head != NULL) tmp->next = head
  tmp->next = head;
  head = tmp;
}

void Print()
{
  Node *tmp = malloc(sizeof(Node));
  tmp = head;
  printf("List: ");
  while(tmp != NULL)
  {
    printf(" %d", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}