/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 02:34:29 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:42:48 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_min(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = (*a);
	i = ft_find_small(a);
	while (tmp)
	{
		if (tmp->content == i)
			break ;
		tmp = tmp->next;
	}
	return (tmp->position);
}

int	ft_max(t_list **a)
{
	t_list	*tmp;
	int		i;

	tmp = (*a);
	i = ft_find_biggest(a);
	if (tmp->content == i)
		return (1);
	while (tmp)
	{
		if (tmp->content == i)
			break ;
		tmp = tmp->next;
	}
	if (tmp->next == NULL)
		return (0);
	else
		return (tmp->next->position);
}

void	ft_to_a(int n, t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	while (tmp)
	{
		if (n == tmp->content)
			break ;
		tmp = tmp->next;
	}
	if (tmp->to_a <= (ft_lstsize(*a) / 2))
	{
		while (tmp -> moves_a != 0)
		{
			ra(a);
			tmp->moves_a--;
		}
	}
	else if (tmp->to_a > (ft_lstsize(*a) / 2))
	{
		while (tmp->moves_a != 0)
		{
			rra(a);
			tmp->moves_a--;
		}
	}
}

void	ft_from_b(int n, t_list **b)
{
	t_list	*tmp;

	tmp = (*b);
	while (tmp)
	{
		if (n == tmp->content)
			break ;
		tmp = tmp->next;
	}
	if (tmp->position <= (ft_lstsize(*b) / 2))
	{
		while (tmp->moves_b != 0)
		{
			rb(b);
			tmp->moves_b--;
		}
	}
	else if (tmp->position > (ft_lstsize(*b) / 2))
	{
		while (tmp->moves_b != 0)
		{
			rrb(b);
			tmp->moves_b--;
		}
	}
}
