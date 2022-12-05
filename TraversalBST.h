#ifndef _TRAVERSAL_BST_H_
#define _TRAVERSAL_BST_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node* create_node(int data);

node* add_to_left(node *root, int data);

node* add_to_right(node *root, int data);

node* put_to_left(node* root, node* left);

node* put_to_right(node* root, node* right);

void print_inorder(node* root);

void print_preorder(node* root);

void print_proorder(node* root);

int find_height(node* root);

void print_space(int n, node* removed);

void print(node* root);

#endif
