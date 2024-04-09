#define CRT SECURE NO WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Linked ist.h"

// 공백 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
    linked ist h* L;
    L = (linkedList_h*)malloc(sizeof(linkedList_h)); 
    L->head = NULL
    return L;
}

// 연결 리스트의 전체 메모리를 해제하는 연산 
void freeLinkedList_h(linkedList_h* L) {
    list Node* p;
    while (L->head != NULL) {
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

// 연결 리스트를 순서대로 출력하는 연산 
vold printList (linkedList_h* L) {
    list Node* p;
    printf("L = (");
    p = L->head;
    while (p 1- NULL) {
       printf("%s", p->data);
       p = p->link;
       If (p != NULL) printf(", ");
    }
printf(") "\n");
}

// 첫 번째 노드로 삽입하는 연산
vold InsertFirstNode(linked_st_h* L, char* x) {
    listNode* newNode;
    newNode = (listNode*)malloc(sizeof(listNode)); 
    strcpy(newNode->data, x);
    newNode->link = L->head;
    L->head = newNode;
}
