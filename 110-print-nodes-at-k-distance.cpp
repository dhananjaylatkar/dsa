#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void print_k_level(Node *root, int k)
{
    if (root == NULL) return;
    if (k == 1)
    {
        cout << root->key << " ";
        return;
    }
    print_k_level(root->left, k - 1);
    print_k_level(root->right, k - 1);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);

    print_k_level(root, 3);
}
