/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:28:51 by eamsalem          #+#    #+#             */
/*   Updated: 2024/05/17 10:11:01 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	if (ft_isdigit(str[i]) || str[i] == '-')
		i++;
	else
		return (false);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
	}
	return (true);
}
