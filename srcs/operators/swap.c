/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:30:34 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/14 20:30:05 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	swap(t_list *stk)
{
	t_num	*tmp;

	if (!stk->next || stk == NULL)
		return ;
	tmp = stk->content;
	stk->content = stk->next->content;
	stk->next->content = tmp;
}

void	swap_ss(t_list *stk_a, t_list *stk_b)
{
	swap(stk_a);
	swap(stk_b);
}
