#include "headers.h"

struct node linked_list(int val) {
  struct node l;
  l.i = val;
  l.next = NULL;
}
void print_list(struct node * p) {
  char out[] = "[ ";
  out += p->i + " ";
  struct current * n = p;
  while (n->next != NULL) {
    out += n->i + " ";
    n = n->next;
  }
}
struct node * insert_front(struct node * p, int);
struct node * free_list(struct node * p);
