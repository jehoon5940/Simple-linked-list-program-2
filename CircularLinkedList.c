#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "CircularLinkedList.h"

// 공백 원형 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
    linkedList_h CL;
    CL = (linkedList_h*)malloc(sizeof(linkedList_h)); 
    CL->head = NULL;
    return CL;
}

// 연결 리스트를 순서대로 출력하는 연산 
void printList (linkedList_h* CL) {
    list Node* p;
    printf(" CL = (");
    p = CL->head;
    
    if (p == NULL) {
        printf(") \n");         return;
    }
    do {
        printf("%s", p->data);
        p = p->link;
        if (p != CL->head) printf(", ");
    } while (p != CL->head);
    printf(") \n");
}


// 첫 번째 노드 삽입 연산
void insertFirstNode(linkedList_h* CL, char* x) {
    list Node* newNode, * temp;
    new Node = (list Node*)malloc(sizeof(list Node));
    strcpy(newNode->data, x);
    if (CL->head == NULL) {
        CL-head = newNode;
        newNode->link = newNode;
    }
    else {
        temp - CL->head;
        while (temp->link != CL->head)
            temp = temp->link;
        newNode->link = temp->link;
        temp->link = newNode;
        CL->head = newNode;
    }
}

// pre 뒤에 노드를 삽입하는 연산
void insertMiddleNode(linkedList_h* CL, listNode* pre, char* x) {
    listNode* newNode;
    newNode = (list Node*)malloc(sizeof(listNode)); 
    strcpy(newNode->data, x); 
    if (CL->head == NULL) {
        CL->head = newNode; 
        newNode->link = newNode;
    }
    else {
         newNode->link = pre->link;
         pre->link = newNode;
    }
}
