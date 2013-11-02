#include <stdio.h>
#include <stdlib.h>

//create a CString array pointer ( pointer array ) and give it a NULL value
char* str = NULL;

int main() 
{
	
	

	for(int i = 0; i < 100000; i++)
	{
		if(i == 0)

			//allocate 100 blocks of memory and assign the pointer to the first one to str
			str = (char*)malloc(1000000);

		else
		
			realloc(str, 100);
		
		//this sends output to my buffer
		sprintf(str, "%d", i);

		// this sends output to the screen (stdout)
		printf("%s\n", str);

		//free(str);
	}


}