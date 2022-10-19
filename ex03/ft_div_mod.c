#include<stdio.h>
#include<stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int *ptr_div;
	int *ptr_mod;

	int i;
	int j;
	int *p;        /* pointer variable for malloc below */
	/* https://www.cs.yale.edu/homes/aspnes/pinewiki/C(2f)Pointers.html */

	i = 16;
	j = 5;

	p = malloc(sizeof(int));
	ptr_div = malloc(sizeof(int));
	ptr_mod = malloc(sizeof(int));

	printf("Address of ptr_div variable: %x\n", &ptr_div);
	printf("Address of ptr_mod variable: %x\n", &ptr_mod);
	printf("ptr_div: %p\n", ptr_div);
	printf("ptr_mod: %p\n", ptr_mod);

	ft_div_mod(i, j, ptr_div, ptr_div);

	printf("ptr_div after: %i\n", *ptr_div);
	printf("ptr_mod after: %i\n", *ptr_mod);
	printf("ptr_div after: %i\n", ptr_div);
	printf("ptr_mod after: %i\n", ptr_mod);
	printf("ptr_div after: %i\n", &ptr_div);
	printf("ptr_mod after: %i\n", &ptr_mod);

	free(p);
	free(ptr_div);
	free(ptr_mod);

	return (0);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int k = a / b;
	int l = a % b;

	printf("k: %i\n", k);

	div = &k;
	mod = &l;
}