/*
** ia_smart.c for smart in /home/menet/Bootstrap/CPE_2015_Allum1
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Sun Feb 21 23:00:52 2016 menett_a
** Last update Thu Feb 25 15:18:02 2016 menett_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "proto.h"

int	clear_line(int tab[4], int *line, int *matches)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      *line = i;
      if (tab[i] > 1)
	{
	  *matches = tab[i];
	  tab[i] = 0;
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

int	clear_one_one(int tab[4], int *line, int *matches)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      *line = i;
      if (tab[i] == 1)
	{
	  *matches = tab[i];
	  tab[i] = 0;
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

int	clear_one(int tab[4], int *line, int *matches)
{
  int	i;

  i = 0;
  while (i < 4)
    {
      *line = i;
      if (tab[i] > 1)
	{
	  *matches = tab[i] - 1;
	  tab[i] = tab[i] - (tab[i] - 1);
	  return (0);
	}
      i = i + 1;
    }
  return (1);
}

int	can_gg(int tab[4], int *line, int *matches)
{
  int	i;
  int	nb[2];

  i = 0;
  nb[0] = 0;
  nb[1] = 0;
  while (i < 4)
    {
      if (tab[i] == 0)
	nb[0] = nb[0] + 1;
      if (tab[i] == 1)
	nb[1] = nb[1] + 1;
      i = i + 1;
    }
  if (nb[0] == 0 && nb[1] == 3)
    return (clear_line(tab, line, matches));
  else if (nb[0] == 1 && nb[1] == 2)
    return (clear_one(tab, line, matches));
  else if (nb[0] == 2 && nb[1] == 1)
    return (clear_line(tab, line, matches));
  else if (nb[0] == 2 && nb[1] == 2)
    return (clear_one_one(tab, line, matches));
  else if (nb[0] == 3)
    return (clear_one(tab, line, matches));
  return (1);
}
