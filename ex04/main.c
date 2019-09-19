/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 14:43:42 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 09:31:11 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int i;
	char *str = "hello t are    sepertate 		cool kid 	words    	w";
	char **res;

	printf("%s", str);
	printf("\n");
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
}
