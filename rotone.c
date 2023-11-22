/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:52:17 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/22 18:03:54 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	if (c == 'Z')
	{
		write(1, "A", 1);
		return ;
	}
	if (c == 'z')
	{
		write(1, "a", 1);
		return ;
	}
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		c = c + 1;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			ft_putchar(argv[1][i++]);
	}
	write(1, "\n", 1);
}
