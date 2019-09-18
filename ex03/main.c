/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 13:34:51 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 13:52:25 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	printf("%d \n", argc);
	while (i < argc)
	{
		printf("%s \n", argv[i]);
		i++;
	}
	printf("\n");
	printf("%s", ft_concat_params(argc, argv));
}
