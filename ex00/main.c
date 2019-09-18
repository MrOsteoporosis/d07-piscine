/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/18 10:12:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/18 10:14:32 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char str[] = "AUSHDwndaoiuhnAWOHUDhCA:iwduchAHdoucANwdoCAHWd;uaf'VAdouhwaDU:ch2;3";

	printf("%s\n", str); 

	printf("%s\n", ft_strdup(str));
}