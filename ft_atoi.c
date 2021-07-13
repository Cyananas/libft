/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pravry <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:52:40 by pravry            #+#    #+#             */
/*   Updated: 2019/12/30 18:51:06 by pravry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	nb;
	int		s;

	nb = 0;
	s = 1;
	i = 0;
	while ((*(str + i) != '\0') &&
	(((*(str + i) < 14) && (*(str + i) > 8)) || (*(str + i) == 32)))
		i++;
	if (*(str + i) == 45)
	{
		s = s * -1;
		i++;
	}
	else if (*(str + i) == 43)
		i++;
	while ((*(str + i) != '\0') && (*(str + i) > 47) && (*(str + i) < 58))
	{
		nb = nb * 10 + s * (*(str + i) - 48);
		i++;
	}
	return ((int)nb);
}
