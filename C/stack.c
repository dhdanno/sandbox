//https://www.wibit.net/?view=lesson#lessonID=32&videoID=128

#include "stdio.h"
#define MAX_STACK_SIZE 255
#define true 1
#define false 0
#define bool unsigned short int

struct stack
{
	int *topOfStack; //declare our stack pointer
	int *pointer;
	int count;
	int max;
	int theStack[MAX_STACK_SIZE]; //declare an array of max size we defined
};


void initStack(struct stack *stackStruct)
{
	stackStruct->topOfStack = stackStruct->theStack;
	stackStruct->pointer = stackStruct->theStack;
	stackStruct->max = MAX_STACK_SIZE;
	stackStruct->count = 0;
}

bool pushStack(struct stack *stackStruct, int inputValue)
{
	if(stackStruct->count < stackStruct->max)
	{
		*stackStruct->pointer = inputValue;
		stackStruct->count++;
		stackStruct->pointer++;
		return true;
	}
	else
		return false;
}


int* popStack(struct stack *stackStruct)
{
	if(stackStruct->count > 0)
	{
		stackStruct->pointer--;
		stackStruct->count--;

		return stackStruct->pointer;
	}
	return NULL;
}

int main()
{
	struct  stack s[4];
	int c = 1;
	for(int i = 0; i < 4; i++)
	{
		initStack(&s[i]);
		for(int j = 0; j < 3; j++)
		{
			pushStack(&s[i], c);
			c++;
		}	
	}

	int *popValue;
	for(int i = 0; i < 4; i++)
	{
		popValue = popStack(&s[i]);
		while(popValue != NULL)
		{
			printf("s[%d] %d\n",i, *popValue );
			popValue = popStack(&s[i]);
		}
		putchar('\n');
	}
	return 0;

}