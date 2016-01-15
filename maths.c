#include <stdio.h>
#include <stdlib.h>

int add(int x, int y)
{
	return x + y; 
}

int subtract(int x, int y)
{
	if(x >= y)
		return x - y;
	else
		return y - x;
}

int multiply(int x, int y)
{
	return x * y;
}

int division(int x, int y)
{
	return y / x;
}

int main()
{
	int x = 4;
	int y = 20;
	
	printf("Add Function = %i\n", add(x, y));
	printf("Subtract Function = %i\n", subtract(x, y));
	printf("Multiply Function = %i\n", multiply(x, y));
	printf("Division Function = %i\n", division(x, y));
	
	return 0;
}