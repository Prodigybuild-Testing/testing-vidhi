#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* CreateNode() {
    struct Node* new = (struct Node*)malloc(sizeof(struct Node));
    return new;
}

void Insert(int val) {
    struct Node* NewNode = CreateNode();
    NewNode->data = val;
    NewNode->next = head;
    head = NewNode;
}

void View() {
    struct Node* temp = head;
    printf("Todo List:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    head = NULL;
    int choice, value;

    while (1) {
        printf("\n1. Add task\n");
        printf("2. View tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task: ");
                scanf("%d", &value);
                Insert(value);
                break;
            case 2:
                View();
                break;
            case 3:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
