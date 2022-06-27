/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_bit_set.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 20:17:08 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/03/18 00:02:14 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_libft.h"

int	is_bit_set(int value, int bitindex)
{
	return ((value & bitindex) == bitindex);
}