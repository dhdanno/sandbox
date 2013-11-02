#include <stdio.h>

int main(int argc, char *argv[])
{
	
	printf("%d",getFactorial(5));

}

int getFactorial(int n)
{
	int local;
	if (n > 1)
	{
		local = n * getFactorial(n - 1);
		return local;
	}
	else
		return 1;
}