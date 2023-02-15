/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:07:41 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 13:09:39 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*s_b;
	t_list	*tmp;

	s_b = (*b);
	tmp = s_b;
	while (s_b)
	{
		if (tmp->total_moves >= s_b->total_moves)
			tmp = s_b;
		s_b = s_b->next;
	}
	ft_places(tmp->content, a, b);
}

void	back(t_list **a)
{
	while (ft_is_sorted(a) == 1)
	{
		if (ft_find(ft_find_small(a), a) <= (ft_lstsize(*a) / 2) + 1)
			while (ft_is_sorted(a) == 1)
				ra(a);
		else if (ft_find(ft_find_small(a), a) > (ft_lstsize(*a) / 2) + 1)
			while (ft_is_sorted(a) == 1)
				rra(a);
	}
}
