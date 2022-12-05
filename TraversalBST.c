#include "TraversalBST.h"

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
    if (root == NULL) return root;

    root->left = create_node(data);
    return root->left;
}

node* add_to_right(node *root, int data)
{
    if (root == NULL) return root;

    root->right = create_node(data);
    return root->right;
}

node* put_to_left(node* root, node* left)
{
    if (root == NULL) return root;

    root->left = left;
    return root;
}

node* put_to_right(node* root, node* right)
{
    if (root == NULL) return root;

    root->right = right;
    return root;
}

void print_inorder(node* root)
{
    if (root == NULL) return;

    print_inorder(root->left);
    printf("%d ", root->data);
    print_inorder(root->right);
}

void print_preorder(node* root)
{
    if (root == NULL) return;

    printf("%d ", root->data);
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_proorder(node* root)
{
    if (root == NULL) return;

    print_proorder(root->left);
    print_proorder(root->right);
    printf("%d ", root->data);
}

int find_height(node* root)
{
    if (root == NULL) return 0;

    int h1 = find_height(root->left);
    int h2 = find_height(root->right);

    if (h1 > h2) return h1 + 1;
    return h2 + 1;
}

void print_space(int n, node* removed)
{
    for (int i = 0; i < n; i++) printf("\t");

    if (removed == NULL) printf(" ");
    else printf("%d", removed->data);
}

void print(node* root)
{
    int height = find_height(root) - 1;
    int counter = 0;
    int numberOfElements = pow(2, height + 1) - 1;

    bool temp_isEmpty = true;
    node* temp_value1 = NULL; // malloc(sizeof(int) * 1);
    node* temp_value2 = NULL; // malloc(sizeof(int) * 1);
    node** list = malloc(sizeof(node) * 2);
    list[0] = root;
    list[1] = NULL;

    printf("Height of tree: %d\n", height);
    while (counter <= height) {
        node* level = list[0];
        list[0] = list[1];
        list[1] = NULL;

        if (temp_isEmpty) {
            print_space(numberOfElements / pow(2, counter + 1), level);
        }
        else {
            print_space(numberOfElements / pow(2, counter), level);
        }

        if (level == NULL) {
            temp_isEmpty = true;
            temp_value1 = NULL;
            temp_value2 = NULL;
        } else {
            temp_isEmpty = false;
            temp_value1 = level->left;
            temp_value2 = level->left;
        }

        if (list[0] == NULL && list[1] == NULL) {
            printf("\n\n");
            list[0] = temp_value1;
            list[1] = temp_value2;
            temp_isEmpty = true;
            temp_value1 = NULL;
            temp_value2 = NULL;
            counter++;
        }
    }
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

    root = put_to_left(root, c6);
    root = put_to_right(root, c17);

    print_inorder(root);
    printf("\n");

    print_preorder(root);
    printf("\n");

    print_proorder(root);
    printf("\n");

    ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////

    root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);

    print_inorder(root);
    printf("\n");

    print_preorder(root);
    printf("\n");

    print_proorder(root);
    printf("\n");

    // print(root);

    return 0;
}
