#include "headers.h"

struct node * linked_list() {
  struct node * l;
  l = malloc(sizeof(struct node));
  l = NULL;
  return l;
}
void print_list(struct node * p) {
  printf("\n[ ");
  if (p != NULL) {
    printf("%d ", p->i);
    struct node n;
    n = *p;
    while (n.next != NULL) {
      n = *(n.next);
      printf("%d ", n.i);
    }
  }
  printf(" ]");
}
struct node * insert_front(struct node * p, int val) {
  struct node * n;
  n = malloc(sizeof(struct node));
  n->i = val;
  n->next = p;
  return n;
}
struct node * free_list(struct node * p) {
  struct node * current;
  current = p->next;
  if (current != NULL) {
    printf("\nfreeing node: %d", p->i);
    free_list(current);
  }
  free(p);
  p = NULL;
  return p;
}
struct node * rem(struct node *front, int data) {
  struct node * current;
  current = front->next;
  if (front->i == data) {
    free(front);
    front = NULL;
    return current;
  }
  while (current != NULL) {
    if (current->i == data) {
      front->next = current->next;
      free(current);
      current = NULL;
      return front;
    }
    else rem(current, data);
    return front;
  }
  return front;
}
