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
