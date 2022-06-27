/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmira-pe <pmira-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:42:42 by pmira-pe          #+#    #+#             */
/*   Updated: 2021/06/16 18:24:35 by pmira-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "h_push_swap_bonus.h"

void	operator_commands(t_list **stk_a, t_list **stk_b, char *command)
{
	if (!ft_strncmp(command, "pa", 2))
		push(stk_a, stk_b);
	else if (!ft_strncmp(command, "pb", 2))
		push(stk_b, stk_a);
	else if (!ft_strncmp(command, "sa", 2))
		swap(*stk_a);
	else if (!ft_strncmp(command, "sb", 2))
		swap(*stk_b);
	else if (!ft_strncmp(command, "ra", 2))
		rotate(stk_a);
	else if (!ft_strncmp(command, "rb", 2))
		rotate(stk_b);
	else if (!ft_strncmp(command, "rr", 3))
		rotate_rr(stk_a, stk_b);
	else if (!ft_strncmp(command, "rra", 3))
		reverse(stk_a);
	else if (!ft_strncmp(command, "rrb", 3))
		reverse(stk_b);
	else if (!ft_strncmp(command, "rrr", 3))
		reverse_rr(stk_a, stk_b);
}

static int	is_move(char *line)
{
	if (!ft_strncmp(line, "pa", 2) || !ft_strncmp(line, "pb", 2)
		|| !ft_strncmp(line, "sa", 2) || !ft_strncmp(line, "sb", 2)
		|| !ft_strncmp(line, "ra", 2) || !ft_strncmp(line, "rb", 2)
		|| !ft_strncmp(line, "rr", 3) || !ft_strncmp(line, "rra", 3)
		|| !ft_strncmp(line, "rrb", 3) || !ft_strncmp(line, "rrr", 3))
		return (1);
	return (0);
}

static int	they_rigth(t_list *stk)
{
	int	i;
	int	size;
	int	*num;

	i = 0;
	size = ft_lstsize(stk);
	num = (int *)malloc(size * sizeof(int));
	num_lst(stk, num);
	while (i != (size - 1))
	{
		if (num[i] > num[i + 1])
		{
			free(num);
			return (0);
		}
		i++;
	}
	free(num);
	return (1);
}

static void	checker(t_list *stk_a)
{
	int		gnl;
	char	*line;
	t_list	*stk_b;

	no_rep(stk_a);
	stk_b = NULL;
	while (1)
	{
		gnl = get_next_line(0, &line);
		if (gnl && is_move(line))
			operator_commands(&stk_a, &stk_b, line);
		else if (!ft_strncmp(line, "Error", 5) || (gnl))
			error();
		free(line);
		if (!gnl)
			break ;
	}
	if (they_rigth(stk_a) && !stk_b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_lstclear(&stk_a, clean_lst);
}

int	main(int ar, char **ars)
{
	if (ar > 1)
		checker(init_stk(ar, ars));
	return (0);
}
