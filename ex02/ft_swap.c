#include<stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int i;
	int j;
	int *ptr_i;
	int *ptr_j;
	
	i = 42;
	j = 43;
	ptr_i = &i;
	ptr_j = &j;

	printf("i before: %i\n", i);
	printf("j before: %i\n", j);
	printf("ptr_i: %p\n", ptr_i);
	printf("deferenced value of ptr_i: %i\n", *ptr_i);	
	ft_swap(ptr_i, ptr_j);
	printf("i after: %i\n", i);
	printf("j after: %i\n", j);

	return (0);
}

void ft_swap(int *a, int *b)
{

	int *tmp;
	*tmp = *a;
	// printf("tmp: %i\n", tmp);
	*a = *b;
	// printf("&a: %i\n", *a);
	*b = *tmp;
}