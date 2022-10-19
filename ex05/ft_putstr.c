#include<stdio.h>
#include<unistd.h>

void ft_putstr(char *str);

int main(void)
{
 ft_putstr("Hallo, World!");
 return (0);
}

void  ft_putstr(char *str)
{
 int i;
 int str_size;

i = 0;
// str_size = sizeof str;

//  printf ("sizeof %i,\n", str_size);
while(str[i] != '\0')
{
  	write(1, &str[i], 1);
  	i++;
}
write(1, "\n", 1);
}