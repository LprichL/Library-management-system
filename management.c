#include "management.h"

struct Node* CreateHead()
{
    struct Node* HeadNode = malloc (sizeof (struct Node));
    HeadNode->next = NULL;
    return HeadNode;
}


struct Node* CreateNewCode(struct book data)
{
    struct Node* NewNode = malloc (sizeof (struct Node));
    NewNode->data = data;
    NewNode->next = NULL;
    return NewNode;
}


void InsertBook(struct Node* HeadNode, struct book data)
{
    struct Node* NewBook = CreateNewCode(data);
    NewBook->next = HeadNode->next;
    HeadNode->next = NewBook;
}


