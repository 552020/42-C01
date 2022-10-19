#include<stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int awesome_array[] = {1, 2, 3, 4};
	int array_size;
	array_size = sizeof(awesome_array) / sizeof(int);
	printf("array_size: %i", array_size);

	ft_rev_int_tab(awesome_array, array_size);
}

void ft_rev_int_tab(int *tab, int size)
{
	int reverted_awesome_array[size];
	int i;
	i = 0;

	printf("reverted_awesome_array: ");
	while(i < size)
	{
		reverted_awesome_array[i] = tab[size - i - 1];
		
		printf("%i, ", reverted_awesome_array[i]);
		i++;
	}
	printf("\n");
	// printf("Hallo");

}