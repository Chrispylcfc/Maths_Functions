#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
	return x + y; 
}

int main()
{
	int x = 4;
	int y = 20;
	
	printf("Add Function = %i\n", add(x, y));
}