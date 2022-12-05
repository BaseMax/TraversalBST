#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node* create_node(int data)
{
    node *new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

node* add_to_left(node *root, int data)
{
    if (root == NULL) return;

    root->left = create_node(data);
    return root->left;
}

node* add_to_right(node *root, int data)
{
    if (root == NULL) return;

    root->right = create_node(data);
    return root->right;
}

node* put_to_left(node* root, node* left)
{
    if (root == NULL) return;

    root->left = left;
    return root;
}

node* put_to_right(node* root, node* right)
{
    if (root == NULL) return;

    root->right = right;
    return root;
}

void print_inorder(node* root)
{
    if (root == NULL) return;

    print_inorder(root->left);
    printf(" %d ", root->data);
    print_inorder(root->right);
}

void print_preorder(node* root)
{
    if (root == NULL) return;


}

int main(int argc, char** argv)
{
    /*
             1
            / \
           2   10
          / \   / \
         3   8 11 12 
        / \  /  \   / \
       4   7 9   13 14 15
      / \        /\    / \
     5   6      16 17 18 19
    */
    node* root = create_node(1);
    root = put_to_left(root, )

    return 0;
}
