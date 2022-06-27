/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_rep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 18:05:53 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/05/26 20:07:59 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	no_rep(t_list *stk)
{
	int	*num;
	int	aux;
	int	i;
	int	j;

	num = (int *)malloc(ft_lstsize(stk) * sizeof(int));
	num_lst(stk, num);
	i = 0;
	while (i < ft_lstsize(stk))
	{
		aux = num[i];
		j = 0;
		while (j < ft_lstsize(stk))
		{
			if (j != i && aux == num[j])
				error();
			j++;
		}
		i++;
	}
	free(num);
}
