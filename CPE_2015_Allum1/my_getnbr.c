/*
** my_getnbr.c for get numbr in /home/menett_a/Piscine/Semaine_1/Piscine_C_J04
**
** Made by Nicolas Menettrier
** Login   <menett_a@epitech.net>
**
** Started on  Fri Oct  9 11:28:39 2015 Nicolas Menettrier
** Last update Wed Feb 17 14:42:56 2016 menett_a
*/

#include <stdlib.h>

int	int_nbr(char a, int lenght, int i, int nb)
{
  if (i < lenght - 1)
    nb = (a - 48 + nb) * 10;
  else
    nb = a - 48 + nb;
  return (nb);
}

int	number(char *str, int i)
{
  if (str[i] >= 48 && str[i] <= 57)
    return (0);
  return (1);
}

int	calcul(int i, int lenght, char *str, int nb)
{
  while (str[lenght] != '\0' && (number(str, lenght) == 0))
    lenght = lenght + 1;
  while (str[i] != '\0' && (number(str, i) == 0))
    {
      nb = int_nbr(str[i], lenght, i, nb);
      i = i + 1;
    }
  return (nb);
}

int	my_getnbr(char *str)
{
  int	i;
  int	lenght;
  int	nb;
  int	menos;

  if (str == NULL)
    return (-6);
  if (str[0] == '\0')
    return (-6);
  menos = 1;
  nb = 0;
  i = 0;
  lenght = 0;
  if (number(str, lenght) != 0)
    return (-7);
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	menos = menos * -1;
      i = i + 1;
    }
  lenght = i;
  nb = calcul(i, lenght, str, nb);
  return (nb * menos);
}
