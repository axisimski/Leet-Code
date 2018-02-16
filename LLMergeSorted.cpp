//2/15/18
//AlexS
#include <stdlib.h>
#include<stdio.h>

struct ListNode {
     int val;
     struct ListNode *next;
 };

//Merge two sorted linked lists; (Uses recursion)
ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    ListNode* ll3=NULL;
    ListNode* tmp=NULL;

    
    if(l1==NULL){
    	return l2;
	}
    if(l2==NULL){
    	return l1;
	}
	
	if(l1->val<l2->val){
		ll3=l1;
		ll3->next=mergeTwoLists(l1->next, l2);
	}
    
    else {
		ll3=l2;
		ll3->next=mergeTwoLists(l2->next, l1);
	}
    
    return ll3;
    
    
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
	ListNode *l2=NULL;
	ListNode *l3=NULL;
	
	push(&l1, 1);
	push(&l1, 5);

	push(&l2, 0);
	push(&l2, 3);
	
	
	l3=mergeTwoLists(l1, l2);
	
	print(&l3);

 	
	
}*/
