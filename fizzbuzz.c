/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:42:31 by phenriq2          #+#    #+#             */
/*   Updated: 2023/10/20 11:59:09 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pnbr(int n)
{
	char	c;

	if (n > 9)
		pnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int i;
	int b;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1, "fizz", 4);
			b = 42;
		}
		if (i % 5 == 0)
		{
			write(1, "buzz", 4);
			b = 42;
		}
		if (b != 42)
			pnbr(i);
		else
			b = 0;
		i++;
		write(1, "\n", 2);
	}
}