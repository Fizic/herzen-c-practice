#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *next, *previous;
    int value;
};

struct Node *generate_list(){
    // returns head
    struct Node *head = (struct Node*) malloc(sizeof(struct Node)), *previous_elem = (struct Node*) malloc(sizeof(struct Node));
    head->next = NULL;
    head->previous = NULL;
    head->value = 0;
    previous_elem = head;
    for(int i = 1; i < 10; i++){
        struct Node *elem = (struct Node*) malloc(sizeof(struct Node));
        elem->next = NULL;
        elem->previous = previous_elem;
        elem->value = i * i;
        previous_elem->next = elem;
        previous_elem = elem;
    }
    return head;
}

void print_list(struct Node *node){
    while (node != NULL){
        printf("%d ", node->value);
        node = node->next;
    }
}

void print_reversed_list(struct Node *node){
    while (node->next != NULL){
        node = node->next;
    }
    while (node != NULL){
        printf("%d ", node->value);
        node = node->previous;
    }
}

void free_list(struct Node *node){
    struct Node *next_node;
    while (node->next != NULL){
        next_node = node->next;
        free(node);
        node = next_node;
    }
}

int main(){
    struct Node *list = generate_list();
    print_list(list);
    printf("\n");
    print_reversed_list(list);
    free_list(list);
    return EXIT_SUCCESS;
}