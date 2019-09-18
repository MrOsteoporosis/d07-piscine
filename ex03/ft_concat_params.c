/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_concat_params.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 13:34:14 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 13:51:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size(int argc, char **argv)
{
	int		i;
	int		a;
	int		size;
	char	*ptr;

	i = 1;
	a = 0;
	size = 0;
	while (i < argc)
	{
		ptr = argv[i];
		while (ptr[a] != '\0')
		{
			a++;
			size++;
		}
		size++;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		a;
	int		pos;
	char	*ptr;
	char	*res;

	res = (char*)malloc(sizeof(int) * ft_size(argc, argv) + 1);
	i = 1;
	a = 0;
	pos = 0;
	while (i < argc)
	{
		ptr = argv[i];
		a = 0;
		while (ptr[a] != '\0')
		{
			res[pos] = ptr[a];
			pos++;
			a++;
		}
		res[pos] = '\n';
		pos++;
		i++;
	}
	return (res);
}
