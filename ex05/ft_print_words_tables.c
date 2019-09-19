/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_words_tables.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/19 09:43:16 by averheij       #+#    #+#                */
/*   Updated: 2019/09/19 09:49:47 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		i++;
	}
}
