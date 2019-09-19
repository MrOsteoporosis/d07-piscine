/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 11:16:29 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 12:46:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	char *nbr = "-90ABC";
	char *base_from = "0123456789ABCDEF";
	char *base_to = "0123456789";

	printf("%s\n", nbr);
	printf("%s\n", base_from);
	printf("%s\n", base_to);
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
}
