#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int i;
	int j;
	int *ptr_i;
	int *ptr_j;

	i = 37;
	j = 9;


	ptr_i = &i;
	ptr_j = &j;

	printf("i: %i, j: %i\n", i, j);
	ft_ultimate_div_mod(ptr_i, ptr_j);
	printf("i: %i, j: %i\n", i, j);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}