/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rout13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:57:01 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/03 10:59:41 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rout13(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			c -= 13;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		rout13(argv[1]);
	write(1, "\n", 1);
	return (0);
}