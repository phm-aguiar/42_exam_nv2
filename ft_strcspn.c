/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phenriq2 <phenriq2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:15:18 by phenriq2          #+#    #+#             */
/*   Updated: 2023/11/22 16:21:16 by phenriq2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int		j;
	int		vf;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		vf = 0;
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				vf = 1;
			j++;
		}
		if (vf)
			continue ;
		count++;
	}
	return (count);
}
