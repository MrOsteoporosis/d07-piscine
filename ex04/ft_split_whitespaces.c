/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 14:23:49 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 16:07:45 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

int		ft_wordlength(char *str)
{
	int i;

	i = 0;
	while (!(str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) && str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src, int length)
{
	char	*cpy;
	int		i;

	cpy = (char*)malloc(sizeof(cpy) * (length + 1));
	i = 0;
	while (i < length)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int		ft_wordcount(char *str)
{
	int		i;
	int		fs;
	int		fe;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || i == 0) && str[i] != '\0')
		{
			fs = i;
			if (i != 0)
				fs++;
			fe = ft_wordlength(&str[fs]);
			if (fe > 1)
				count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		fs;
	int		fe;
	int		pos;
	char	**res;

	pos = 0;
	i = 0;
	res = (char**)malloc(sizeof(char*) * (ft_wordcount(str) + 1));
	while (str[i] != '\0')
	{
		if ((str[i] == 32 || (str[i] >= 9 && str[i] <= 13) || i == 0) && str[i] != '\0')
		{
			fs = i;
			if (fs > 0)
				fs++;
			fe = ft_wordlength(&str[fs]);
			if (fe > 1)
			{
				res[pos] = ft_strdup(&str[fs], fe);
				pos++;
			}
		}
		i++;
	}
	res[pos] = 0;
	return (res);
}
