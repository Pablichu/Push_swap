/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_medium.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:15:46 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/15 20:59:59 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

int	search_small(int *num, int size)
{
	int	i;
	int	pos;
	int	small;

	i = 0;
	pos = 0;
	small = INT_MAX;
	while (i < size)
	{
		if (num[i] < small)
		{
			small = num[i];
			pos = i;
		}
		i++;
	}
	if (pos > (size / 2))
		pos = (size - pos) * -1;
	return (pos);
}

void	five_size(t_list **stk_a, int *num)
{
	t_list	*stk_b;
	int		j;

	j = 0;
	while (1)
	{
		moving_n_pushing_a(stk_a, search_small(num, ft_lstsize(*stk_a)));
		operator_commands(stk_a, &stk_b, "pb");
		j++;
		num_lst(*stk_a, num);
		if ((*stk_a)->next->next->next == NULL)
			break ;
	}
	three_size(stk_a, num);
	while (j)
	{
		operator_commands(stk_a, &stk_b, "pa");
		j--;
	}
}
