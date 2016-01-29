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

int remainder(int x, int y)
{
	return x % y;
}

float average()
{
	int i, n;
	float num[4];
	float sum = 0;
	float average;
	printf("Enter Number of Entries(Min 1, Max 5): ");
	scanf("%d", &n);

	for(i=0; i < n; i++)
	{
		printf("Enter Number: ");
		scanf("%f", &num[i]);
		sum += num[i];
	}
	average = sum/n;

	return average;
}

int main()
{
	int x = 4;
	int y = 20;
	
	printf("Add Function = %i\n", add(x, y));
	printf("Subtract Function = %i\n", subtract(x, y));
	printf("Multiply Function = %i\n", multiply(x, y));
	printf("Division Function = %i\n", division(x, y));

	printf("Average Function = %.2f\n", average());
	printf("Remainder Function = %i\n", remainder(x, y));

	return 0;
}
