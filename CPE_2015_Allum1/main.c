/*
** main.c for main in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Tue Feb  9 10:28:04 2016 menett_a
** Last update Sat Feb 20 13:47:48 2016 menett_a
*/

#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "proto.h"

void	put_space(int nb_space)
{
  int	i;

  i = 0;
  while (i < nb_space)
    {
      my_putchar(' ');
      i = i + 1;
    }
}

void	print_game_board(int tab[4])
{
  int	i;
  int	j;

  i = 0;
  my_putstr("*********\n");
  while (i < 4)
    {
      my_putchar('*');
      put_space(3 - i);
      j = 0;
      while (j < (i * 2) + 1)
	{
	  if (j < tab[i])
	    my_putchar('|');
	  else
	    my_putchar(' ');
	  j = j + 1;
	}
      put_space(3 - i);
      my_putstr("*\n");
      i = i + 1;
    }
  my_putstr("*********\n");
}

int	main()
{
  int	tab[4];
  int	win;

  win = 1;
  tab[0] = 1;
  tab[1] = 3;
  tab[2] = 5;
  tab[3] = 7;
  srand(time(NULL));
  while (is_win(win, tab) != 0)
    {
      print_game_board(tab);
      my_putchar('\n');
      if (win == 1)
	{
	  if (cycles_str(tab) == NULL)
	    return (1);
	}
      else
	ia_turn(tab);
      win = win * -1;
    }
  return (0);
}
