/*
** ia.c for ia in /home/menet/Bootstrap/CPE_2015_Allum1
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Sun Feb 14 20:45:52 2016 menett_a
** Last update Mon Feb 22 12:43:39 2016 menett_a
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "proto.h"

void	binary(int tab[4], int binar[4][3])
{
  int	nb;
  int	i;
  int	j;

  i = 0;
  while (i < 4)
    {
      j = 0;
      nb = tab[i];
      while (j < 3)
	{
	  if (nb > 0 && (nb % 2 == 1))
	    binar[i][j] = 1;
	  else if (nb > 0 && (nb % 2 == 0))
	    binar[i][j] = 0;
	  else
	    binar[i][j] = 0;
	  nb = nb / 2;
	  j = j + 1;
	}
      i = i + 1;
    }
}

int	is_gg(int tab[4], int binar[4][3])
{
  binary(tab, binar);
  if ((binar[0][0] + binar[1][0] + binar[2][0] + binar[3][0]) % 2 == 0
      && (binar[0][1] + binar[1][1] + binar[2][1] + binar[3][1]) % 2 == 0
      && (binar[0][2] + binar[1][2] + binar[2][2] + binar[3][2]) % 2 == 0)
    return (1);
  return (0);
}

int	ia_smart(int tab[4], int *line)
{
  int	binary[4][3];
  int	save;
  int	i;
  int	matches;

  i = 0;
  matches = 0;
  while (i < 4)
    {
      save = tab[i];
      *line = i;
      if (can_gg(tab, line, &matches) == 0)
	return (matches);
      while (tab[i] > 0)
	{
	  tab[i] = tab[i] - 1;
	  if (is_gg(tab, binary) == 1)
	    return (save - tab[i]);
	}
      tab[i] = save;
      i = i + 1;
    }
  return (0);
}

void	ia_turn(int tab[4])
{
  int	line;

  line = 0;
  my_putstr("AI's turn...\n");
  my_putstr("AI removed ");
  my_putchar(ia_smart(tab, &line) + 48);
  my_putstr(" match(es) from line ");
  my_putchar(line + 49);
  my_putchar('\n');
}
