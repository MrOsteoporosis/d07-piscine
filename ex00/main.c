/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 10:12:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 08:53:19 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "";

	printf("%s\n", str);

	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
}
