/* Singly Circular Linked List with create(), display(), search(), and length() operations:*/
#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};
// Function to create a new node
struct Node* create(struct Node* tail, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = newNode; // Make the next of new node point to itself initially
    if (tail == NULL) {
        tail = newNode;
    } 
    else
     {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
    return tail;
}
// Function to display the circular linked list
void display(struct Node* tail) {
    if (tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = tail->next;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("(back to the start)\n");
}
// Function to search an element in the circular linked list
int search(struct Node* tail, int value) {
    if (tail == NULL) {
        return 0;  // List is empty
    }
    struct Node* temp = tail->next;
    do {
        if (temp->data == value) {
            return 1;
        }
        temp = temp->next;
    } while (temp != tail->next);
    return 0;
}
// Function to find the length of the circular linked list
int length(struct Node* tail) {
    if (tail == NULL) {
        return 0;  // List is empty
    }
    int count = 0;
    struct Node* temp = tail->next;
    do {
        count++;
        temp = temp->next;
    } while (temp != tail->next);
    return count;
}
int main() {
    struct Node* tail = NULL;
    // Create circular linked list
    tail = create(tail, 10);
    tail = create(tail, 20);
    tail = create(tail, 30);
    // Display the list
    printf("Circular Linked List: ");
    display(tail);
    // Search for a value
    int key = 20;
    if (search(tail, key))
        printf("Element %d found in the list.\n", key);
    else
        printf("Element %d not found in the list.\n", key);
    // Display the length of the list
    printf("Length of the Circular Linked List: %d\n", length(tail));
    return 0;
}