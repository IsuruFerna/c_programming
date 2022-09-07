#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *head;  // global

// insert an integer at end of list
void Insert(int data)
{
  struct Node *new = malloc(sizeof(struct Node));

  new->data = data;
  new->next = NULL;
  head = new;

  struct Node *tmp = head;
  while (tmp->next != NULL)
  {
    tmp = tmp->next;
  }
  tmp->next = new->next;
  
};

void Print()
{
  struct Node *tmp = head;
  while(tmp != NULL)
  {
    printf("%d ", tmp->data);
    tmp = tmp->next;
  }
  printf("\n");
}; 

// Delete node at position n
void Delete(int n)
{
  struct Node *tmp1 = head;
  if(n == 1)
  {
    head = tmp1->next; // head now points to second node.
    free(tmp1);
    return;
  }
  int i;
  for(i = 0; i < n-2; i++)
    tmp1 = tmp1->next;
  // tmp1 points to (n-1)th Node
  struct Node *tmp2 = tmp1->next; // nth Node
  tmp1->next = tmp2->next; // (n+1)th Node
  free(tmp2); //delete tmp2;
} 
  

int main()
{
  head = NULL; // emoity list;
  Insert(2);
  Insert(4);
  Insert(6);
  Insert(5); // List : 2, 4, 6, 5 
  Print();
  int n;
  printf("Enter a positon: \n");
  scanf("%d", &n);
  Delete(n);
  Print();
}