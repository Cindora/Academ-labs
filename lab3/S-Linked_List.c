#include "S-Linked_List.h"

#include <stdlib.h>
#include <stdio.h>


void insertFirst(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;

    *head = newNode;
}

void deleteFirst(struct Node** head) {
    struct Node* temp = *head;

    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    *head = (*head)->next;
    free(temp);
}

void display(struct Node* node) {
    printf("List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

