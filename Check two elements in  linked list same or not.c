#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

void display(struct Node* node) {
    
    while (node != NULL) {
       
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void concatenate(struct Node** head1, struct Node* head2) {
    if (*head1 == NULL) {
        *head1 = head2;
        return;
    }

    struct Node* temp = *head1;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
}

int main() {
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;

    for (int i = 4; i > 0; i--) {
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head1;
        head1 = newNode;
    }
     printf("List 1 : ");
    display(head1);

    for (int i = 8; i > 4; i--) {
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = head2;
        head2 = newNode;
    }
     printf("List 2 : ");
    display(head2);
 printf("Concatenate of Elements: ");
    concatenate(&head1, head2);
        
    display(head1);

    return 0;
}