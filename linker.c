#include <stdio.h>
#include <stdlib.h>
#include"linker.h"
Node Find(Node head , KEY key){
    Node tmp = head;
    while (tmp -> key != key){
        tmp = tmp -> next;
    }
    return tmp;
}
Node CreateLinker(void){
    Node linker;
    linker = malloc(sizeof(struct Point));
    linker -> data = 0;
    linker -> next = NULL;
    linker -> key = 0;
    return linker;
}
void Append(Node head , Node node){
    Node tmp = head;
    while (tmp -> next != NULL){
        tmp = tmp -> next;
    }
    tmp -> next = node;
}
void Insert(Node head , KEY key , Node node){
    Node tmp = Find(head , key);
    if (tmp -> next == NULL){
        Append(tmp , node);
        return;
    }
    node -> next = tmp -> next;
    tmp -> next = node;
}
void Delete(Node head , KEY key){
    Node tmp = head;
    while (tmp -> next -> key != key){
        tmp = tmp -> next;
    }
    Node del = tmp -> next;
    tmp -> next = del -> next;
    free(del);
}
