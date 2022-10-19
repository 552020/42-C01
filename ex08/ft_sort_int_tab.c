#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int my_array[] = {6, 4, 3, 2, 1, 6, 7, 8};
	int array_size;
	array_size = sizeof(my_array) / sizeof(int);
	printf("array size: %i\n", array_size);
	ft_sort_int_tab(my_array, array_size);
	return (0);
}

void ft_sort_int_tab(int *tab, int size)
{
	// int ordered_array[size];
	int a;
	a = 0;
	printf("before: ");
	while(a < size)
	{
		printf("%i ",tab[a]);
		
		a++;
	}
	printf("\n");


	int i = 0;
	int j = 1;
	while(i < size)
	{
		while(j < size)
		{
			if(tab[i] > tab[j + i])
			{
				
				int helper;
				helper = tab[i];
				tab[j] = tab[i];
				tab[i] = helper;
			}
			j++;
		}
		i++;
	}

	a = 0;
	printf("after: ");
	while(a < size)
	{
		printf("%i ",tab[a]);
		
		a++;
	}
	printf("\n");

}