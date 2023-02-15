/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:57:20 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 13:09:47 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort(t_list **a, t_list **b)
{
	int	i;
	int	len;

	i = 1;
	if (ft_is_sorted(a) == 0)
		return ;
	len = get_longest(a);
	ft_indexed(a, b, len);
	while (i != 0)
	{
		if (ft_lstsize(*b) == 0)
			break ;
		ft_positions(a, b);
		ft_to_position(a, b);
		ft_push(a, b);
		i++;
	}
	back(a);
	ft_free_stack(a);
}

void	ft_free_stack(t_list **lst)
{
	t_list	*tmp;

	while ((*lst))
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		free(tmp);
	}
}

void	sorting(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 3)
		sort_3(a);
	else if (ft_lstsize(*a) == 5)
		ft_sort5(a, b);
	else
		ft_sort(a, b);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;
	char	**str;

	i = 0;
	(void)ac;
	if (!av[1])
		exit(0);
	else
	{
		str = ft_check_args(av);
		while (str[i] != NULL)
		{
			ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(str[i])));
			i++;
		}
		ft_free_str(str);
		sorting(&stack_a, &stack_b);
	}
	ft_free_stack(&stack_a);
}
