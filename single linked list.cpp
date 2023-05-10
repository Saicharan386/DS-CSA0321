#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
void insertAtEnd(struct Node** head, int data) 
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) 
	{
        *head = newNode;
        return;
    }
    struct Node* lastNode = *head;
    while (lastNode->next != NULL) 
	{
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}
void deleteNode(struct Node** head, int key) 
{
    struct Node* temp = *head;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == key) 
	{
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) 
	{
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
	{
        return;
    }
    prev->next = temp->next;
    free(temp);
}


void printList(struct Node* node) 
{
    while (node != NULL) 
	{
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
int main() 
{
    struct Node* head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 0);
    deleteNode(&head, 2);
    printList(head);
    return 0;
}

