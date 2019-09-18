/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 11:25:30 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 13:27:55 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int	min = -100;
	int	max = 400;
	int i = 0;
	int *range = NULL;
	int length;

	printf("%d \n", min);
	printf("%d \n", max);
	length = ft_ultimate_range(&range, min, max);
	while (i < length)
	{
		printf("%d \n", range[i]);
		i++;
	}
}
