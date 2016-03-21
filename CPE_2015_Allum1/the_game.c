/*
** fonction_error.c for fonction in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Tue Feb  9 19:22:20 2016 menett_a
** Last update Sun Feb 21 21:49:36 2016 menett_a
*/

#include <stdlib.h>
#include <unistd.h>
#include "proto.h"

char	*matches_number(int *i, int tab[4], int line)
{
  char	*s;
  int	matches;

  my_putstr("Matches: ");
  if ((s = get_next_line(0)) == NULL)
    return (NULL);
  matches = error_matches(s, tab, line);
  free(s);
  if (matches < 0)
    {
      *i = *i - 1;
      return ("mauvais numero d'allumette");
    }
  tab[line] = tab[line] - matches;
  my_putstr("Player removed ");
  *i = *i + 1;
  my_putchar((char)matches + 48);
  my_putstr(" match(es) from line ");
  my_putchar((char)line + 49);
  my_putchar('\n');
  return ("pas d'erreurs");
}

char	*line_number(int *i, int tab[4], int *line)
{
  char	*s;

  *line = -5;
  while (*line < 0)
    {
      my_putstr("Line: ");
      if ((s = get_next_line(0)) == NULL)
	return (NULL);
      *line = error_line(s, tab);
      free(s);
    }
  *line = *line - 1;
  *i = *i + 1;
  return ("pas d'erreurs");
}

char	*cycles_str(int tab[4])
{
  int	i;
  int	line;

  i = 0;
  line = 0;
  my_putstr("Your turn:\n");
  while (i < 2)
    {
      if (i == 0)
	{
	  if (line_number(&i, tab, &line) == NULL)
	    return (NULL);
	}
      if (i == 1)
	{
	  if (matches_number(&i, tab, line) == NULL)
	    return (NULL);
	}
    }
  return ("pas d'erreurs");
}
