#include <stdio.h>
#include <stdlib.h>

//Define a struct for the linked list node
struct Node{
    int value;
    struct Node* next;
};

int main(void){
    //Creating head of the Linked List
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->value = 1;
    head->next = NULL;
    printf("The value at head is %d\n", head->value);
    //Dont forget to free memory allocated for the head node
    free(head);
    return 0;
}