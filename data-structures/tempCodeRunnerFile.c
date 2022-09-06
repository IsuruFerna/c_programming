  inserting second value to the list
  n = malloc(sizeof(node));
  {
    free(list);
    return 1;
  }

  n->val = 2;
  n->next = NULL;
  list = n->next;