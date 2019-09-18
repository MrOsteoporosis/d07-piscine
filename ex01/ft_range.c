/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 10:15:36 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 10:19:49 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int length;
	int i;
	int *range;

	length = max - min;
	range = (int*)malloc(sizeof(range) * length);
	i = 0;
	while (i < length)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
