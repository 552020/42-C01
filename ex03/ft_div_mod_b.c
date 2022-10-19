#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int i;
	int j;
	int div;
	int mod;
	int *ptr_div;
	int *ptr_mod;


	i = 42;
	j = 0;
	ptr_div = &div;
	ptr_mod = &mod;

	ft_div_mod(i, j, ptr_div, ptr_mod);
	printf("div: %i\n", div);
	printf("mod: %i\n", mod);
	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	/* add something to avoid the "floating point exception (core dumpied) if b is 0*/
	*div = a / b;
	*mod = a % b;
}
