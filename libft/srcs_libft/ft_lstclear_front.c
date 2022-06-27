/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 19:18:12 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/05/31 19:56:44 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_libft.h"

void	ft_lstclear_front(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (*lst == NULL)
		return ;
	aux = *lst;
	*lst = (*lst)->next;
	ft_lstdelone(aux, del);
}
