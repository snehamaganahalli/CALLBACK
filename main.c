#include<stdio.h>

typedef void (*func) (int);

void print_var(int v)
{

	printf("\n Printing variable %d \n", v);

}

void print(func p)
{

	p(5);

}

int main()
{
	print(print_var);

	return 0;
}
