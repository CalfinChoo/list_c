#ifndef HEADERS_H
#define HEADERS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#endif

struct node { int i; struct node *next; };

struct node * linked_list();
void print_list(struct node * p);
struct node * insert_front(struct node * p, int val);
struct node * free_list(struct node * p);
struct node * rem(struct node *front, int data);
