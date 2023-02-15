/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:30:57 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:39:33 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rotate_rev(t_list **lst)
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

void	rra(t_list **lst)
{
	ft_rotate_rev(lst);
	write(1, "rra\n", 4);
}

void	rrb(t_list **lst)
{
	ft_rotate_rev(lst);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	ft_rotate_rev(a);
	ft_rotate_rev(b);
	write(1, "rrr\n", 4);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*b == NULL || *a == NULL)
		return ;
	tmp = *b;
	(*b) = (*b)->next;
	ft_lstadd_front(a, tmp);
	write(1, "pa\n", 3);
}
