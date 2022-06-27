/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 20:29:53 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/16 17:00:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap.h"

void	push(t_list **stk_dst, t_list **stk_src)
{
	t_list	*aux;

	if ((*stk_src) == NULL)
		return ;
	aux = *stk_src;
	*stk_src = (*stk_src)->next;
	if (!stk_dst)
		*stk_dst = ft_lstnew(aux->content);
	else
	{
		aux->next = *stk_dst;
		*stk_dst = aux;
	}
}
