#include <stdio.h>

int main(int argc, char *argv[])
{
	const int rows = 1000, cols = 30;
	int myArray[rows][cols];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			myArray[i][j] = i + j;
		}	
	
	}

	for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				printf("%d\t", myArray[i][j]);
			}	
		
		}
		putchar('\n');

	return 0;
}