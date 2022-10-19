#include<unistd.h>
#include<stdio.h>

void ft_putstr(char *str);

int main(void)
{
	ft_putstr("Hello, World!");
	return (0);
}

void  ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i] != 0)
	char c = str[0];
	write(1, &c, 1); 
}