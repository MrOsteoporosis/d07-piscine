/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 09:43:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 09:52:07 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_words_tables(char **tab);

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	char *str = "hello t are    sepertate 		cool kid 	words    	w";
	char **res;

	res = ft_split_whitespaces(str);
	ft_print_words_tables(res);
}
