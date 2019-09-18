/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 11:23:44 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 13:26:24 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int i;
	int *ptr;

	length = max - min;
	i = 0;
	if (length < 1)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * length);
	ptr = *range;
	while (i < length)
	{
		*(ptr + i) = min + i;
		i++;
	}
	return (length);
}
