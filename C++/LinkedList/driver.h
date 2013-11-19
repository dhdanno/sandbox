linkedlist :: linkledlist()
{
	head = NULL;
	_count = 0;
}

linkedlist :: ~linkedlist()
{
	clear();
	head = NULL;
	tempPtr = NULL;
	visitPtr = NULL;
}