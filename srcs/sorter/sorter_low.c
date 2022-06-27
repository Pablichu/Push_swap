/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 20:13:48 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/14 20:42:47 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	two_size(t_list *stk, int *num)
{
	if (num[0] > num[1])
	{
		swap(stk);
		write(1, "sa\n", 3);
	}
}

void	three_size(t_list **stk, int *num)
{
	if (num[0] < num[1] && num[1] > num[2] && num[0] < num[2])
	{
		operator_commands(stk, NULL, "rra");
		operator_commands(stk, NULL, "sa");
	}
	else if (num[0] < num[1] && num[1] > num[2] && num[0] > num[2])
	{
		operator_commands(stk, NULL, "rra");
	}
	else if (num[0] > num[1] && num[1] > num[2] && num[0] > num[2])
	{
		operator_commands(stk, NULL, "ra");
		operator_commands(stk, NULL, "sa");
	}
	else if (num[0] > num[1] && num[1] < num[2] && num[0] < num[2])
		operator_commands(stk, NULL, "sa");
	else if (num[0] > num[1] && num[1] < num[2] && num[0] > num[2])
		operator_commands(stk, NULL, "ra");
}
