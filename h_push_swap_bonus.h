/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h_push_swap_bonus.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 20:40:08 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/16 20:06:32 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_PUSH_SWAP_BONUS_H
# define  H_PUSH_SWAP_BONUS_H
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include "libft/h_libft.h"

typedef struct s_num
{
	int				num;
}				t_num;

void	swap(t_list *stk);
void	swap_ss(t_list *stk_a, t_list *stk_b);
void	push(t_list **stk_dst, t_list **stk_src);
void	rotate(t_list **stk);
void	rotate_rr(t_list **stk_a, t_list **stk_b);
void	reverse(t_list **stk);
void	reverse_rr(t_list **stk_a, t_list **stk_b);
void	operator_commands(t_list **stk_a, t_list **stk_b, char *command);

void	num_lst(t_list *stk, int *num);

void	no_rep(t_list *stk);
t_list	*init_stk(int ar, char **ars);
int		ft_atoi_modified(const char *str);

void	clean_lst(void *cont);
void	error(void);
void	malloc_fail(void);

#endif
