/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 10:19:46 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 10:24:58 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	min = 0;
	int	max = 10000;
	int i = 0;
	int *range;

	printf("%d \n", min);
	printf("%d \n", max);
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d \n", range[i]);
		i++;
	}
}
