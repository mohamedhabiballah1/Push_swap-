/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:29:36 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/13 16:58:26 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_swap(t_list **lst)
{
	int	nb;

	if ((*lst)->next == NULL)
		return ;
	nb = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = nb;
}

void	sa(t_list **lst)
{
	if (!(*lst))
		return ;
	else
	{
		ft_swap(lst);
		write(1, "sa\n", 3);
	}
}

void	sb(t_list **lst)
{
	if (!(*lst))
		return ;
	else
	{
		ft_swap(lst);
		write(1, "sb\n", 3);
	}
}

void	ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}

int	ft_is_sorted(t_list **a)
{
	t_list	*tmp;

	tmp = (*a);
	while (tmp->next)
	{
		if (tmp -> content > tmp -> next -> content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}
