//2/15/18

#include <stdlib.h>
#include <string.h>
#include<stdio.h>

typedef struct ListNode{
     int val;
     struct ListNode *next;
 }ListNode;

//Reverse singly linked list
struct ListNode* reverseList(struct ListNode* l1 ){
    
 struct	ListNode* prev=NULL;
 struct	ListNode *next;
 struct	ListNode *current=l1;

    
    if(l1==NULL){
    	return l1;
	}
	
	while(current!=NULL){
		
    	next = current->next;  
        current->next = prev;   
        prev = current;
        current = next;
		
	}
	
	l1=prev;

	return l1;
	   
    
}
/*
void push(ListNode **head,int value){
    ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
    temp->val = value;
    temp->next = *head;
	*head = temp;
}

void print(ListNode **head){
	
	ListNode *tmp = *head;
	int null=0;
	
	while(tmp != NULL){
		null++;
		printf("%d\n",  tmp->val);
		tmp = tmp->next;
	}
	
	if(null<1){
		printf("List is empty\n");
	}
}

 



int main(){
	
	ListNode *l1=NULL;
	ListNode *l3=NULL;


	
	push(&l1, 1);
	push(&l1, 5);
	push(&l1, 0);
	push(&l1, 3);
	
	print(&l1);
	
	l3=reverseList(l1);
	
    print(&l3);
 	
	
}
