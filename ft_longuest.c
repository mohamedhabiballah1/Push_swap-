/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longuest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 12:08:47 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:43:54 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_indexed(t_list **a, t_list **b, int len)
{
	t_list	*tmp;
	int		i;

	tmp = ft_lstlast(*a);
	i = 1;
	while (tmp)
	{
		if (tmp->index == len)
		{
			tmp->index = 1;
			len--;
		}
		else
			tmp->index = 0;
		tmp = tmp->back;
	}
	push_b(a, b);
}

int	get_longest(t_list **a)
{
	t_list	*tmp;
	t_list	*next;

	next = (*a)->next;
	while (next)
	{
		tmp = (*a);
		while (tmp != next)
		{
			if ((tmp->content < next->content) && (tmp->index >= next->index))
				next->index = tmp->index + 1;
			tmp = tmp->next;
		}
		next = next->next;
	}
	return (find_len(a));
}

void	ft_positions(t_list **a, t_list **b)
{
	t_list	*tmp;
	t_list	*tmp1;
	int		i;

	tmp = (*a);
	tmp1 = (*b);
	i = 0;
	while (tmp)
	{
		tmp->position = i;
		tmp = tmp->next;
		i++;
	}
	i = 0;
	while (tmp1)
	{
		tmp1->position = i;
		tmp1 = tmp1->next;
		i++;
	}
}

int	find_len(t_list **a)
{
	int		i;
	t_list	*tmp;

	tmp = (*a);
	i = 0;
	while (tmp)
	{
		if (tmp->index > i)
			i = tmp->index;
		tmp = tmp->next;
	}
	return (i);
}

void	ft_total(t_list **a, t_list **b)
{
	t_list	*tmp1;

	tmp1 = (*b);
	while (tmp1)
	{
		if (tmp1 -> to_a <= (ft_lstsize(*a) / 2)
			&& tmp1 -> position <= (ft_lstsize(*b) / 2))
		{
			if (tmp1->moves_a <= tmp1->moves_b)
				tmp1->total_moves = tmp1->moves_b;
			else if (tmp1->moves_a > tmp1->moves_b)
				tmp1->total_moves = tmp1->moves_a;
		}
		else if (tmp1 -> to_a > (ft_lstsize(*a) / 2)
			&& tmp1 -> position > (ft_lstsize(*b) / 2))
		{
			if (tmp1->moves_a <= tmp1->moves_b)
				tmp1->total_moves = tmp1->moves_b;
			else if (tmp1->moves_a > tmp1->moves_b)
				tmp1->total_moves = tmp1->moves_a;
		}
		else
			tmp1->total_moves = tmp1->moves_a + tmp1->moves_b;
		tmp1 = tmp1->next;
	}
}
