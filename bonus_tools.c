/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:11:35 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:56:32 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	(*a) = (*a)->next;
	ft_lstadd_front(b, tmp);
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*b == NULL || *a == NULL)
		return ;
	tmp = *b;
	(*b) = (*b)->next;
	ft_lstadd_front(a, tmp);
}

void	ft_r(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if ((*lst)->next == NULL || !(*lst))
		return ;
	tmp = (*lst);
	(*lst) = (*lst)->next;
	(*lst)->back = NULL;
	last = ft_lstlast(*lst);
	last->next = tmp;
	tmp->next = NULL;
}

void	ft_rrv(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if ((*lst)->next == NULL || !(*lst))
		return ;
	tmp = (*lst);
	while (tmp->next != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}
	tmp->next = (*lst);
	(*lst) = tmp;
	(*lst)->back = NULL;
	last->next = NULL;
}

void	swap(t_list **lst)
{
	int	nb;

	if ((*lst)->next == NULL || !(*lst))
		return ;
	nb = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = nb;
}
