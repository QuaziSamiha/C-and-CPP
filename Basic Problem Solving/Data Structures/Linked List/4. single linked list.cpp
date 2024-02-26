#include <iostream>

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

    struct node *current2 = NULL;
    current2 = (struct node *)malloc(sizeof(struct node));
    current2->data = 60;
    current2->link = NULL;
    current->link = current2;

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }

    return 0;
}