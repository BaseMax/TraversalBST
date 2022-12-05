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
    node* c1 = create_node(5);
    node* c2 = create_node(6);
    node* c3 = create_node(4);
    c3 = put_to_left(c3, c1);
    c3 = put_to_right(c3, c2);

    node* c4 = create_node(3);
    node* c5 = create_node(7);
    c4 = put_to_left(c4, c3);
    c4 = put_to_left(c4, c5);

    node* c6 = create_node(2);
    node* c7 = create_node(8);
    c6 = put_to_left(c6, c4);
    c6 = put_to_right(c6, c7);


    node* c8 = create_node(16);
    node* c9 = create_node(17);

    node* c10 = create_node(18);
    node* c11 = create_node(19);


    node* c12 = create_node(13);
    node* c13 = create_node(15);

    c13 = put_to_left(c13, c10);
    c13 = put_to_right(c13, c11);

    c12 = put_to_left(c12, c8);
    c12 = put_to_right(c12, c9);

    node* c14 = create_node(14);
    node* c15 = create_node(15);
    node* c16 = create_node(12);
    c16 = put_to_left(c16, c14);
    c16 = put_to_right(c16, c15);

    node* c17 = create_node(10);
    node* c18 = create_node(11);
    c17 = put_to_left(c17, c18);
    c17 = put_to_right(c17, c16);

    return 0;
}
