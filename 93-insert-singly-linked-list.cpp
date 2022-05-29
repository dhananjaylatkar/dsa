#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void print_ll(Node *head)
{
    Node *curr = head;

    while (curr)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
    return;
}

Node *insert_at_begin(Node *head, int x)
{
    Node *x_node = new Node(x);
    x_node->next = head;
    return x_node;
}

Node *insert_at_end(Node *head, int x)
{
    Node *tmp = new Node(x);
    if (head == NULL)
    {
        return tmp;
    }
    Node *curr = head;
    while (curr->next)
    {
        curr = curr->next;
    }
    curr->next = tmp;
    return head;
}
int main(int argc, char *argv[])
{
    Node *head = NULL;
    head = insert_at_begin(head, 10);
    head = insert_at_begin(head, 20);
    head = insert_at_begin(head, 30);
    head = insert_at_begin(head, 40);

    head = insert_at_end(head, 10);
    head = insert_at_end(head, 20);
    head = insert_at_end(head, 30);
    head = insert_at_end(head, 40);

    print_ll(head);
    return 0;
}
