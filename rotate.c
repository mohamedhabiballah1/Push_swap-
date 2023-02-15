/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:30:24 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/13 18:46:19 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_rotate(t_list **lst)
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

void	ra(t_list **lst)
{
	ft_rotate(lst);
	write(1, "ra\n", 3);
}

void	rb(t_list **lst)
{
	ft_rotate(lst);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (*a == NULL)
		return ;
	tmp = *a;
	(*a) = (*a)->next;
	ft_lstadd_front(b, tmp);
	write(1, "pb\n", 3);
}
