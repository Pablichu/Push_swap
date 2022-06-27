/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 19:44:11 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/16 17:40:52 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	clean_lst(void *cont)
{
	t_num	*aux;

	aux = cont;
	free(aux);
}

void	malloc_fail(void)
{
	write(1, "Malloc did not work\n", 20);
}

void	error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}
