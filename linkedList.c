#include<stdio.h>

typedef struct node{
        int item;
        struct node* next;
}Node;

struct node* creat_head_node(int item){
    Node* head;
    head =(Node*)malloc(sizeof(Node));
    if(head){
        head ->item = item;
        head ->next = NULL;
        return head;
    }
}
struct node* append(int item , Node* head){
    //create a node space
    Node* newNode, *p;
    p = head ;
    newNode = (Node*)malloc(sizeof(Node));
    if(newNode){
        while(p ->next != NULL){
        p = p ->next;
    }
        p ->next = newNode ;
        newNode -> item = item;
        newNode -> next = NULL;
    }
    return newNode ;
}
int main(void){
    int item1,item2,item3,item4;
    scanf("%i %i %i %i", &item1 , &item2 , &item3 , &item4);
    struct node* p; //p is a pointer that can store Node datatype
    p = creat_head_node(item1);
    //Node *nn , *mm , *oo;
    append(item2 , p);
    append(item3 , p);
    append(item4 , p);
    while(p->next!=NULL){
        printf("%d ",p->item);
        p=p->next;
    }
    if(p -> next == NULL){
        printf("%d" , p ->item);
    }
return 0;
}