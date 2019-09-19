/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 10:39:50 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 12:11:15 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strbasetoint(char *nbr, char *base)
{
	int		i;
	int		a;
	int		res;
	int		baseno;

	baseno = 0;
	while (base[baseno] != '\0')
		baseno++;
	i = 0;
	res = 0;
	while (nbr[i] != '\0')
	{
		a = 0;
		while (base[a] != '\0' && nbr[i] != base[a])
		{
			a++;
		}
		res = (res * baseno) + a;
		i++;
	}
	return (res);
}

int		ft_ressize(int nbr, int baseno)
{
	int size;

	size = 0;
	while (nbr / baseno)
	{
		size++;
		nbr /= baseno;
	}
	return (size);
}

void	ft_doconv(int nbr, char *base, char *res, int baseno)
{
	int		i;

	i = ft_ressize(nbr, baseno);
	while (nbr)
	{
		res[i] = base[nbr % baseno];
		nbr /= baseno;
		i--;
	}
}

char	*ft_inttostrbase(int nbr, char *base)
{
	int		sign;
	char	*res;
	int		baseno;

	baseno = 0;
	while (base[baseno] != '\0')
		baseno++;
	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	res = (char*)malloc(sizeof(char) * (ft_ressize(nbr, baseno) + 1 + sign));
	if (sign)
		res[0] = '-';
	ft_doconv(nbr, base, &res[sign], baseno);
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base10;
	char	*res;
	int		signoffset;

	base10 = 1;
	signoffset = 0;
	if (nbr[0] == '-')
	{
		signoffset = 1;
		base10 = -base10;
	}
	base10 *= ft_strbasetoint(&nbr[signoffset], base_from);
	res = ft_inttostrbase(base10, base_to);
	return (res);
}
