#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#include "queque.h"


Queque *createQueque()
{
	Queque *myqueque; 
	myqueque = malloc(sizeof(Queque)); 
	if(!myqueque){
		fprintf(stderr,"Errore"); 
		exit(EXIT_FAILURE);
	}
	myqueque->head = NULL; 
	myqueque->tail = NULL;
	return myqueque;
}


Node *createNode(int value)
{
	Node *mynode; 
	mynode = malloc(sizeof(Node)); 
	if(!mynode){
		fprintf(stderr, "Errore"); 
		exit(EXIT_FAILURE);
	}
	mynode->value = value;
	mynode->next = NULL; 
	return mynode;
}

void enqueque(Queque *myqueque, Node *mynode)
{
	if(!myqueque){
		fprintf(stderr, "Errore"); 
		exit(EXIT_FAILURE);
	}
	if(!myqueque->head){
		myqueque->head = mynode; 
		myqueque->tail = mynode;
	}else{
		myqueque->tail->next = mynode; 
		myqueque->tail = mynode;
	}
}

Node *dequeque(Queque *myqueque)
{
	Node *temp;
	if(!myqueque){
		fprintf(stderr, "Errore"); 
		exit(EXIT_FAILURE);
	}
	if(!myqueque->head) return NULL;
	temp = myqueque->head; 
	myqueque->head = myqueque->head->next;
	return temp;
}

void printNode(Node *mynode)
{
	if(mynode){
		printf("Position: %p  item:   %d \n",mynode, mynode->value);
	}
}

void printQueque(Queque *myqueque)
{	
	Node *current;
	if(myqueque){
		current = myqueque->head; 
		while(current){
			printNode(current);
			current = current->next;
		}
	
	}
}
