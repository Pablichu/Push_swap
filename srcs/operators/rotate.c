/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:30:29 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/14 20:30:53 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	rotate(t_list **stk)
{
	t_list	*first;
	t_list	*last;

	if (*stk == NULL || (*stk)->next == NULL)
		return ;
	first = *stk;
	last = *stk;
	while (last->next != NULL)
		last = last->next;
	*stk = (*stk)->next;
	first->next = NULL;
	last->next = first;
}

void	rotate_rr(t_list **stk_a, t_list **stk_b)
{
	rotate(stk_a);
	rotate(stk_b);
}
