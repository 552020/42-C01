#include<stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
	int my_array[] = {3, 1, 2, 4, 9, 5, 7, 9, 3, 4};
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
	while(a < size - 1)
	{
		printf("%i ",tab[a]);
		
		a++;
	}
	printf("\n\n\n");


	int i = 0;
	int j = 1;
	while(i < size - 1)
	{
		printf("I LOOP START: %d\n", i);
		while(j < size - 1 - i)
		{
			// printf("Round j: %i\n", j);
			int k;
			k =  j + i;
			if(tab[i] > tab[k])
			{
				printf("K LOOP START: %i\n", k);
				a = 0;
			
				while(a < size - 1)
				{
					printf("%i ",tab[a]);
					a++;
				}
				printf("\n");
				int helper;

				helper = tab[i];
				printf("helper: %i, ", helper);

				tab[i] = tab[k];
				printf("tab[i]: %i, ", tab[i]);

				tab[k] = helper;
				printf("tab[k]: %i, \n\n", tab[k]);
				printf("K LOOP END\n\n");

			}
			j++;
		}
		i++;
		j = 1;
	}

	a = 0;
	printf("after: ");
	while(a < size - 1)
	{
		printf("%i ",tab[a]);
		
		a++;
	}
	printf("\n");

}