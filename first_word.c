/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:01:45 by phenriq2          #+#    #+#             */
/*   Updated: 2023/10/20 11:35:50 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
		return (0);
	while (*argv[i] == ' ' || *argv[i] == '\t')
		i++;
	while (*argv[i] != ' ')
	{
		write(1, &argv[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
