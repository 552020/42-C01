#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
	int i;
	int *ptr;
	
	i = 43;
	/* *ptr = &i;  this was wrong*/
	ptr = &i;

	printf("i before ft_ft\n: %i ", i);
	ft_ft(ptr);
	printf("i after ft_ft: %i ", i);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}