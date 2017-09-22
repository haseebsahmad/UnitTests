#include "stdafx.h"
/* Implementation of Stack class*/
class stak{
public:
	/* Construction of single node of 'single' linked list*/
	struct node{
		int number; /*Data numbers*/
		node *next;/* Pointer of node of linked list*/
	}*head = NULL, *tail = NULL, *ptr = NULL, *nptr = NULL;
	/* Push function*/
	bool push(int n){
		/* Creation of a new node*/
		nptr = new node;
		nptr->number = n;
		nptr->next = NULL;
		/* Checking if the linked list is empty*/
		if (head == NULL){
			head = tail = nptr;
			tail->next = NULL;
			return true;
		}
		/* if the linked list is not empty, we assign the next pointer of last node to the new node
		and tail now points to the new node
		*/
		else{
			tail->next = nptr;
			tail = nptr;
			tail->next = NULL;
			return true;
		}
	}
	/* pop function*/
	int pop(){
		int temp;
		/* If the list is empty, we will be returned with a NULL pointer*/
		if (head == NULL){
			return NULL;
		}
		else{
			/* If the linked list is not empty, the very first node of linked list will
			be assinged to a temp variable. The head will now point to 2nd node of linked list.
			Finally, we will now remove the first node of our stack(linked list)
			*/
			ptr = head;
			temp = ptr->number;
			head = head->next;
			delete(ptr);
			return temp;
		}
	}
	/* isEmpty function*/
	bool isEmpty(){
		/* if the stack(linkedlist) is empty it will return a true. Otherwise it
		will return a False
		*/
		if (head == NULL){
			return true;
		}
		else {
			return false;
		}
	}
};
