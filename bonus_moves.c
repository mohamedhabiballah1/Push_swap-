/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:59:45 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 10:58:34 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_do_move(char *str, t_list **a, t_list **b)
{
	if (f_strcmp(str, "ss\n") == 0)
		ft_ss(a, b);
	else if (f_strcmp(str, "sb\b") == 0)
		swap(b);
	else if (f_strcmp(str, "ra\n") == 0)
		ft_r(a);
	else if (f_strcmp(str, "rb\n") == 0)
		ft_r(b);
	else if (f_strcmp(str, "rra\n") == 0)
		ft_rrv(a);
	else if (f_strcmp(str, "rrb\n") == 0)
		ft_rrv(b);
	else if (f_strcmp(str, "pa\n") == 0)
		ft_pa(a, b);
	else if (f_strcmp(str, "pb\n") == 0)
		ft_pb(a, b);
	else if (f_strcmp(str, "rr\n") == 0)
		ft_rr(a, b);
	else if (f_strcmp(str, "rrr\n") == 0)
		ft_rrr(a, b);
	else if (f_strcmp(str, "sa\n") == 0)
		swap(a);
	else
		ft_error();
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_r(a);
	ft_r(b);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rrv(a);
	ft_rrv(b);
}

void	ft_ss(t_list **a, t_list **b)
{
	swap(a);
	swap(b);
}

int	f_strcmp(char *s1, char *s2)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (s1[i] == s2[y] && (s1[i] && s2[y]) != '\0')
	{
		i++;
		y++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
