/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:13:10 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/22 18:42:49 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				str[j] = '*';
			j++;
		}
		i++;
	}
}

void	no_repet(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j] && str1[i] != '*')
				str2[j] = '*';
			j++;
		}
		i++;
	}
}

void	putstr(char *str, char *str2)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] != '*')
			write(1, &str[i], 1);
	}
	i = -1;
	while (str2[++i])
	{
		if (str2[i] != '*')
			write(1, &str2[i], 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		first(argv[1]);
		first(argv[2]);
		no_repet(argv[1], argv[2]);
		putstr(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
