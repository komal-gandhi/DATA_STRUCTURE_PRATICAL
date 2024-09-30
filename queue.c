#include <stdio.h>
#include <stdbool.h>

#define MAX 5  // Define the maximum size of the queue

typedef struct {
    int items[MAX];
    int front;
    int rear;
} Queue;

// Function prototypes
void initialize(Queue *q);
bool isfull(Queue *q);
bool isempty(Queue *q);
void insert(Queue *q, int value);
int delete(Queue *q);
void display(Queue *q);
int peek(Queue *q);

int main() {
    Queue q;
    initialize(&q);

    insert(&q, 10);
    insert(&q, 20);
    insert(&q, 30);
    display(&q);

    printf("Front element is: %d\n", peek(&q));
    delete(&q);
    display(&q);

    return 0;
}

// Initialize the queue
void initialize(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
bool isfull(Queue *q) {
    return (q->rear + 1) % MAX == q->front;
}

// Check if the queue is empty
bool isempty(Queue *q) {
    return q->front == -1;
}

// Insert an element into the queue
void insert(Queue *q, int value) {
    if (isfull(q)) {
        printf("Queue is full. Cannot insert %d\n", value);
        return;
    }
    if (isempty(q)) {
        q->front = 0;  // Set front to 0 if inserting first element
    }
    q->rear = (q->rear + 1) % MAX;  // Circular increment of rear
    q->items[q->rear] = value;
}

// Delete an element from the queue
int delete(Queue *q) {
    if (isempty(q)) {
        printf("Queue is empty. Cannot delete.\n");
        return -1;  // Return -1 or any other error code
    }
    int value = q->items[q->front];
    if (q->front == q->rear) {
        // Queue is now empty after deletion
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;  // Circular increment of front
    }
    return value;
}

// Display the elements of the queue
void display(Queue *q) {
    if (isempty(q)) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i != q->rear; i = (i + 1) % MAX) {
        printf("%d ", q->items[i]);
    }
    printf("%d\n", q->items[q->rear]);  // Print the rear element
}

// Peek at the front element without removing it
int peek(Queue *q) {
    if (isempty(q)) {
        printf("Queue is empty. Cannot peek.\n");
        return -1;  // Return -1 or any other error code
    }
    return q->items[q->front];
}
