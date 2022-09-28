struct Node {
    int data;
    struct Node* next;
};

void insertFirst(struct Node** head, int data);

void deleteFirst(struct Node** head);

void display(struct Node* node);