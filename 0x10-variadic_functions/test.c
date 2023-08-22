#include <stdio.h>
void add(int a, int b)
{
	    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	    printf("Multiplication is %d\n", a*b);
}

/**
 * main - uses an array of pointers to functions
 *
 * Return: Always (0)
 */
int main(void)
{
	void (*func_ptr[3])(int, int) = {add, subtract, multiply};

	(*func_ptr[1])(4, 5);

	return (0);
}
