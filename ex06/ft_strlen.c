#include<stdio.h>
#include<unistd.h>

int	ft_strlen(char *str);

int main(void)
{
	char string[] = "Hello 42!";
	ft_strlen(string);
}

int ft_strlen(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
		printf("i: %i\n", i);
	}

	printf("string length: %i\n", i);
	return i;
}