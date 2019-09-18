/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 14:43:42 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 16:09:39 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
	int i;
	char *str = "hello   these 	 are seperate words";
	char **res;

	printf("%s", str);
	printf("\n");
	res = ft_split_whitespaces(str);
	i = 0;
	while (res[i] != 0)
	{
		printf("%s \n", res[i]);
		i++;
	}
}
