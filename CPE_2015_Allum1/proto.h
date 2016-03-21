/*
** proto.h for proto in /home/menet/Bootstrap/CPE_2015_allum1_bootstrap
**
** Made by menett_a
** Login   <menett_a@epitech.net>
**
** Started on  Tue Feb  9 12:15:12 2016 menett_a
** Last update Thu Feb 25 15:18:01 2016 menett_a
*/

#ifndef PROTO_H_
# define PROTO_H_

void	binary(int tab[4], int binar[4][3]);
void	print_game_board(int tab[4]);
void	ia_turn(int tab[4]);
void	my_putstr(char *);
void	my_putchar(char);
void	put_space(int);
char	*matches_number(int *, int tab[4], int);
char	*line_number(int *, int tab[4], int *);
char	*cycles_str(int tab[4]);
char	*get_next_line(int);
int	clear_one_one(int tab[4], int *, int *);
int	error_matches(char *, int tab[4], int);
int	clear_line(int tab[4], int *, int *);
int	clear_one(int tab[4], int *, int *);
int	clear_tab(int tab[4], int *, int *);
int	is_gg(int tab[4], int binar[4][3]);
int	can_gg(int tab[4], int *, int*);
int	error_line(char *, int tab[4]);
int	ia_smart(int tab[4], int *);
int	is_win(int, int tab[4]);
int	number(char *, int);
int	my_getnbr(char *);
int	error(char *);

#endif /* !PROTO_H_ */
