/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 12:50:56 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 13:29:00 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(void)
{
	int i;
	char *str = "anaqmazi,ngstrin.gtos,plit";
	char *charset = "ns";
	char **res;

	printf("%s", str);
	printf("\n");
	res = ft_split(str, charset);
	i = 0;
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
}
