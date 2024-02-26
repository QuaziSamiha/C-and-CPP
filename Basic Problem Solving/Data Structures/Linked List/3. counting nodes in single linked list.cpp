#include <iostream>
// traversing linked list and count the total number of nodes
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));

    current->data = 96;
    current->link = NULL;

    head->link = current;

    // struct node *ptr;
    struct node *ptr = NULL;
    ptr = head;

    int count = 0;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    cout << "Total Nodes: " << count << endl;
    return 0;
}