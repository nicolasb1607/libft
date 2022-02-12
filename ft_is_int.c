/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:58:42 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/12 19:15:16 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_is_int(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	if (ft_strlen(str) < 10)
		return (1);
	if (ft_strlen (str) > 11)
		return (0);
	if (ft_strlen (str) == 10)
		if (ft_strcmp("2147483647", str) < 0)
			return (0);
	if (ft_strlen(str) == 11)
		if (ft_strcmp("-2147483648", str) < 0)
			return (0);
	return (1);
}
