/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_modified.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 19:21:52 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/15 19:38:49 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

int	ft_atoi_modified(const char *str)
{
	long	num;
	int		neg;

	num = 0;
	neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
	{
		if (!ft_isalnum(str[1]))
			error();
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	if (((*str < '0' || *str > '9') && *str) || num > 2147483647
		|| num < -2147483648)
		error();
	return ((int)(num * neg));
}
