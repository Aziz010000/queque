


typedef struct node{
	int value;
	struct node *next;
}Node;


typedef struct queque{
	Node *head; 
	Node *tail;

}Queque;

Node *createNode(int value);
Queque *createQueque();
void enqueque(Queque *myqueque,Node *mynode);
Node *dequeque(Queque *myqueque);
void printNode(Node *mynode);
void printQueque(Queque *myqueque);
