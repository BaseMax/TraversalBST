# Traversal BST (Binary Search Tree)

This is a simple implementation of Binary Search Tree (BST) in C language. All In-order, Pre-order, and Post-order traversal functions are implemented.

This code is written for educational purposes.

### Examples

```text
7 3 2 8 1 11 10 14 12 15
1 2 3 7 8 10 11 12 14 15
7 3 8 2 11 14 15 12 10 1
```

OR

```text
2 1 3
1 2 3
2 3 1
```

### Structure

```c
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;
```

### Functions

- `node* create_node(int data)`
- `node* add_to_left(node *root, int data)`
- `node* add_to_right(node *root, int data)`
- `node* put_to_left(node* root, node* left)`
- `node* put_to_right(node* root, node* right)`
- `void print_inorder(node* root)`
- `void print_preorder(node* root)`
- `void print_proorder(node* root)`
- `int find_height(node* root)`
- `void print_space(int n, node* removed)`
- `void print(node* root)`

Copyright (c) 2022, Max Base
