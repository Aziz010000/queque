#include "queque.h"


int main(int arcv, char *argv[])
{
	Queque *myqueque = createQueque();
	enqueque(myqueque,15);
	enqueque(myqueque,27);
	enqueque(myqueque,18);
	enqueque(myqueque,90);
	dequeque(myqueque);
	printQueque(myqueque);	






	return 0;
}
