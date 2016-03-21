/*
** my_putstr.c for my_putstr.c in /home/menet/Bootstrap/CPE_2015_Allum1
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Sat Feb 20 13:41:53 2016 menett_a
** Last update Sat Feb 20 13:44:28 2016 menett_a
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
