/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:30:17 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/14 20:30:57 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	reverse(t_list **stk)
{
	t_list	*first;
	t_list	*last;

	if (*stk == NULL || (*stk)->next == NULL)
		return ;
	first = *stk;
	last = *stk;
	while (last->next != NULL)
	{
		if (first->next->next != NULL)
			first = first->next;
		last = last->next;
	}
	last->next = *stk;
	first->next = NULL;
	*stk = last;
}

void	reverse_rr(t_list **stk_a, t_list **stk_b)
{
	reverse(stk_a);
	reverse(stk_b);
}
