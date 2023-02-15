/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:22:17 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:39:53 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

char	*ft_join(char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = ft_strdup(av[i]);
	i++;
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	return (str);
}

void	push_b(t_list **a, t_list **b)
{
	t_list	*tmp;
	int		i;

	tmp = (*a);
	i = ft_lstsize(*a);
	while (i != 0)
	{
		if (tmp->index != 1)
			pb(a, b);
		else
			ra(a);
		tmp = (*a);
		i--;
	}
}

void	a_moves(t_list **a, t_list **b)
{
	t_list	*tmp1;

	tmp1 = (*b);
	while (tmp1)
	{
		if (tmp1->to_a <= (ft_lstsize(*a) / 2))
			tmp1->moves_a = tmp1 -> to_a;
		else if (tmp1->to_a > (ft_lstsize(*a) / 2))
			tmp1->moves_a = ((ft_lstsize(*a)) - (tmp1 -> to_a));
		tmp1 = tmp1->next;
	}
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

char	**ft_check_args(char **av)
{
	char	*str;
	char	**args;

	if (ft_check_space(av) != 0)
	{
		write(2, "Error", 6);
		exit(1);
	}
	str = ft_join(av);
	args = ft_split(str, ' ');
	free(str);
	if (ft_check_nums(args) != 0)
	{
		write(2, "Error", 6);
		ft_free_str(args);
		exit(1);
	}
	if (ft_check_duplicate(args) != 0 || ft_check_int(args) != 0)
	{
		write(2, "Error", 6);
		ft_free_str(args);
		exit(1);
	}
	return (args);
}
