#include <stdio.h>

int main(int argc, char *argv[])
{

	int *p;
	int n;
	
	*p = 100;
	n = 200;

	printf("Address [%p] = [%d]\n", p, *p);
	printf("Address [%p] = [%d]\n", &n, n);

    int *terry;
    *terry = 5;

	printf("Hello: %d", terry);
	
	return 0;
}
