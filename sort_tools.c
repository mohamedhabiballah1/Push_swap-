/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tools.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:03:19 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:43:22 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_places(int n, t_list **a, t_list **b)
{
	ft_do_rr(n, a, b);
	ft_do_rrr(n, a, b);
	ft_from_b(n, b);
	ft_to_a(n, a, b);
	pa(a, b);
}

void	ft_do_rr(int n, t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	while (tmp)
	{
		if (n == tmp->content)
			break ;
		tmp = tmp->next;
	}
	if (tmp->to_a <= (ft_lstsize(*a) / 2)
		&& tmp->position <= (ft_lstsize(*b) / 2))
	{
		while (tmp->moves_b != 0 && tmp->moves_a != 0)
		{
			rr(a, b);
			tmp->moves_a--;
			tmp->moves_b--;
		}
	}
}

void	ft_do_rrr(int n, t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	while (tmp)
	{
		if (n == tmp->content)
			break ;
		tmp = tmp->next;
	}
	if (tmp->to_a > ((ft_lstsize(*a) / 2))
		&& tmp->position > (ft_lstsize(*b) / 2))
	{
		while (tmp->moves_b != 0 && tmp->moves_a != 0)
		{
			rrr(a, b);
			tmp->moves_a--;
			tmp->moves_b--;
		}
	}
}

void	ft_to_position(t_list **a, t_list **b)
{
	t_list	*tmp1;

	tmp1 = (*b);
	while (tmp1)
	{
		tmp1->to_a = ft_find_place(tmp1->content, a);
		tmp1 = tmp1->next;
	}
	tmp1 = (*b);
	while (tmp1)
	{
		if (tmp1->position <= (ft_lstsize(*b) / 2))
			tmp1->moves_b = tmp1 -> position;
		else if (tmp1->position > (ft_lstsize(*b) / 2))
			tmp1->moves_b = (ft_lstsize(*b) - (tmp1 -> position));
		tmp1 = tmp1->next;
	}
	tmp1 = (*b);
	a_moves(a, b);
	ft_total(a, b);
}

int	ft_find_place(int min, t_list **a)
{
	t_list	*s_a;
	t_list	*s_next;

	s_a = (*a);
	s_next = s_a->next;
	if (min < ft_find_small(a))
		return (ft_min(a));
	else if (min > ft_find_biggest(a))
		return (ft_max(a));
	while (s_next)
	{
		if (min > s_a->content && min < s_next->content)
			return (s_next->position);
		s_next = s_next->next;
		s_a = s_a->next;
	}
	return (0);
}
