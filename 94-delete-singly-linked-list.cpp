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

Node *delete_first_itm(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *new_head = head->next;
    delete head;
    return new_head;
}

Node *delete_last_itm(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    Node *prev = NULL;
    while (curr->next)
    {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL)
    {
        delete head;
        return NULL;
    }

    prev->next = NULL;
    delete curr;
    return head;
}

int main(int argc, char *argv[])
{
    Node *head = NULL;
    head = insert_at_end(head, 10);
    head = insert_at_end(head, 20);
    head = insert_at_end(head, 30);
    head = insert_at_end(head, 40);
    print_ll(head);

    head = delete_first_itm(head);
    print_ll(head);

    head = delete_last_itm(head);
    print_ll(head);
    return 0;
}
