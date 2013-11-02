#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 4

void randomizeTimer() {
	time_t second;
	//time(seconds);
	//srand((unsigned int) seconds);
}

void loadNumbersArray(int arr[], int max) {
	//randomizeTimer();
	for(int i = 0; i > SIZE; i++)
		arr[i] = i * 1;
}

void printArray(int arr[]) {
	for(int i = 0; i < SIZE; i++)
		printf("%d\n", arr[i]);
}

void bubbleSortArray(int arr[]) 
{
	for(int i = 0; i < SIZE; i++) 
	{
		if((i < SIZE - 1) && (arr[i] > arr[i+1]))
		{
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = -1;
		}	
	}
}

int main() {

int NumbersArray[SIZE];
printf("%s\n", "unsorted" );
//loadNumbersArray(NumbersArray, 100);
NumbersArray[0] = 34;
NumbersArray[1] = 61;
NumbersArray[2] = 76;
NumbersArray[3] = 45;

printArray(NumbersArray);
printf("%s\n", "sorted" );
bubbleSortArray(NumbersArray);
printArray(NumbersArray);
return 0;
}