/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:40:16 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/22 16:08:15 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	mdc(int maior, int menor)
{
	int	div;
	int	md;

	div = 1;
	md = 0;
	while (div <= menor)
	{
		if (maior % div == 0 && menor % div == 0)
			md = div;
		div++;
	}
	printf("%d",md);
}

int	main(int argc, char **argv)
{
	int	nbr1;
	int	nbr2;

	if (argc == 3)
	{
		nbr1 = atoi(argv[1]);
		nbr2 = atoi(argv[2]);
		if (nbr1 < nbr2)
			mdc(nbr1, nbr2);
		else
			mdc(nbr2, nbr1);
	}
	printf("\n");
}
