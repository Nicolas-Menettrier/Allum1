/*
** my_error.c for errr in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Tue Feb  9 14:55:34 2016 menett_a
** Last update Sat Feb 20 13:46:13 2016 menett_a
*/

#include <unistd.h>
#include <stdio.h>
#include "proto.h"

int	is_alpha_in_number(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (number(str, i) == 1)
	return (-1);
      i = i + 1;
    }
  return (0);
}

int	error_matches(char *str, int *tab, int line)
{
  int	nb;

  if ((nb = my_getnbr(str)) == 0)
    {
      my_putstr("Error: you have to remove at least one match\n");
      return (-1);
    }
  else if (is_alpha_in_number(str) == -1 || nb < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
  else if (nb > tab[line])
    {
      my_putstr("Error: not enough matches on this line\n");
      return (-1);
    }
  else
    return (nb);
}

int	error_line(char *str, int tab[4])
{
  int	nb;

  nb = my_getnbr(str);
  if (nb > 0 && nb < 5 && tab[nb - 1] <= 0)
    {
      my_putstr("Error: this line is empty\n");
      return (-1);
    }
  else if (is_alpha_in_number(str) == -1 || nb < 0)
    {
      my_putstr("Error: invalid input (positive number expected)\n");
      return (-1);
    }
  else if (nb > 4 || nb == 0)
    {
      my_putstr("Error: this line is out of range\n");
      return (-1);
    }
  else
    return (nb);
}
