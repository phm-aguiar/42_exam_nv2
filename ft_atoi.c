/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:40:46 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/16 16:03:25 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	str_len(char *s)
{
	char	*init;

	init = s;
	while (*s && (*s >= '0' && *s <= '9'))
		s++;
	return (s - init);
}

int	ft_sing(char sing)
{
	if (sing == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	pow;
	int	sign;

	pow = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	sign = ft_sing(*str);
	if (*str == '+' || *str == '-')
		str++;
	i = str_len((char *)str);
	while (--i)
		pow *= 10;
	while (*str >= '0' && *str <= '9')
	{
		i += ((*str - '0') * pow);
		pow /= 10;
		str++;
	}
	return (i * sign);
}

int	main(void)
{
	printf("%d", ft_atoi("	 	 	 	-32bd"));
}
