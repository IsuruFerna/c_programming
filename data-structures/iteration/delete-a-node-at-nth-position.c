#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int data;
  struct Node *next;
}
Node;

struct Node *head;

int Insert(int n);
void Print();
void Delete(int n);

int main()
{
  head = NULL;
  
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5);
  Print();
  int n;
  printf("Enter the delete position: ");
  scanf("%d", &n);
  Delete(n);
  Print();
}

int Insert(int n)
{
  Node *tmp = malloc(sizeof(Node));
  if (tmp == NULL)
  {
    return 1;
  }
  tmp->data = n;
  tmp->next = NULL;

  if (head == NULL)
  {
    head = tmp;
  }
  else
  {
    Node *curr = head;
    while(curr->next != NULL)
    {
      curr = curr->next;
    }
    curr->next= tmp;
  }
  // printf("curr: %d\n", tmp->data);
}

void Print()
{
  printf("List: ");
  Node *tmp = head;
  for (tmp; tmp != NULL; tmp = tmp->next)
  {
    printf("%d ", tmp->data);
  }
  printf("\n");
}

void Delete(int n)
{
  Node *tmp1 = head;
  if(n == 1)
  {
    head = tmp1->next;
    free(tmp1);
    return;
  }

  for (int i = 0; i < n - 2; i++)
  {
    // tmp1 poits to (n-1)th node
    tmp1 = tmp1->next; 
  }
  Node *tmp2 = tmp1->next; // nth node
  tmp1->next = tmp2->next; // (n + 1)th node
  free(tmp2); // delete tmp2
  
}