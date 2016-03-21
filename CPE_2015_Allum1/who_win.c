/*
** who_win.c for who win in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Thu Feb 11 18:16:20 2016 menett_a
** Last update Sun Feb 21 21:50:16 2016 menett_a
*/

#include <unistd.h>
#include "proto.h"

int	is_win(int win, int tab[4])
{
  int	i;

  i = 0;
  while (i < 4)
    {
      if (tab[i] != 0)
	return (1);
      i = i + 1;
    }
  print_game_board(tab);
  if (win == 1)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  else
    my_putstr("You lost, too bad..\n");
  return (0);
}
