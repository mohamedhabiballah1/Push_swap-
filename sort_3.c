/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:12:34 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 11:39:57 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_find_small(t_list **lst)
{
	int		i;
	int		min;
	t_list	*tmp;

	i = 0;
	tmp = *lst;
	min = tmp->content;
	while (tmp)
	{
		if (min > (tmp->content))
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	ft_find_biggest(t_list **lst)
{
	int		i;
	int		min;
	t_list	*tmp;

	i = 0;
	tmp = (*lst);
	min = tmp->content;
	while (tmp)
	{
		if (min < (tmp->content))
			min = tmp->content;
		tmp = tmp->next;
	}
	return (min);
}

int	ft_find(int n, t_list **a)
{
	int		i;
	t_list	*tmp;

	i = 1;
	tmp = (*a);
	while (tmp)
	{
		if (tmp->content == n)
			return (i);
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	ft_sort5(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i != 2)
	{
		if (ft_find(ft_find_small(a), a) <= (ft_lstsize(*a) / 2))
		{
			while (ft_find(ft_find_small(a), a) != 1)
				ra(a);
			pb(a, b);
		}
		else if (ft_find(ft_find_small(a), a) > (ft_lstsize(*a) / 2))
		{
			while (ft_find(ft_find_small(a), a) != 1)
				rra(a);
			pb(a, b);
		}
		i++;
	}
	sort_3(a);
	pa(a, b);
	pa(a, b);
}

void	sort_3(t_list **a)
{
	if (ft_is_sorted(a) == 0)
		return ;
	if (ft_find(ft_find_biggest(a), a) == 1)
	{
		if (ft_find(ft_find_small(a), a) == 2)
			ra(a);
		else if (ft_find(ft_find_small(a), a) == 3)
		{
			ra(a);
			sa(a);
		}
	}
	else if (ft_find(ft_find_biggest(a), a) == 2)
	{
		if (ft_find(ft_find_small(a), a) == 1)
		{
			rra(a);
			sa(a);
		}
		else if (ft_find(ft_find_small(a), a) == 3)
			rra(a);
	}
	else if (ft_find(ft_find_biggest(a), a) == 3)
		sa(a);
}
