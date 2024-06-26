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


vold insertMiddleNode(linkedList_h* L, list Node* pre, char* x) {
    list Node* newNode;
    newNode = (list Node*)malloc(sizeof(list Node)); 
    strcpy(newNode->data, x);
    if (L->head == NULL) {
        newNode->link= NULL; 
        L->head = newNode;
    }
    else if (pre == NULL) {
       newNode->link = L->head;
       L->head = newNode;
    }
    else {
        newNode->link = pre->link;
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linked_ist_h* L, char* x) {
    listNode* newNode;
    listNode* temp;
    newNode = (list Node*)malloc(sizeof(list Node)); 
    strcpy(newNode->data, x);
    newNode->link = NULL;
    if (L->head == NULL) {
        L->head = newNode;
        return;
    }
// 현재 리스트가 공백이 아닌 경우
    temp = L->head;
    while (temp->link != NULL) temp = temp->link;
    temp->link = newNode;
}


void deletedNode(linkelist_h* L, listNode* p) {
    listNode* pre;
    if (L->head == NULL) return;
    if (L->head->link == NULL) { 
        free(L->head); 
        L->head = NULL;
        return;
    }
    else if (p == NULL) return; 
    else {
        pre = L->head;
        while (pre->link != p) {
           pre = pre->link;
        }
        pre>link = p->link;
        free(p);
    }
}

// 리스트에서 X 노드를 탐색하는 연산
listNode* searchNode(Iinkedist_h* L, char* x) {
    listNode* temp;
    temp = L->head;
    while (temp != NULL) {
       if (strcmp(temp->data, x) ==0) return temp;
       else temp = temp->link;
    }
    return temp;
}


void reverse(linkedList_h* L) {
    listNode* p;
    listNodex q;
    listNode* r;

    p = L->head;
    q = NULL;
    r = NULL;

// 리스트의 첫 번째 노드부터 링크를 따라 다음 노드로 이동하면서
// 노드 간의 연결을 바꿈
    while (p != NULL) {
        r = q;
        q = p;
        p = p->link;
        q->link = r;
     }
     L->head = q;
}
