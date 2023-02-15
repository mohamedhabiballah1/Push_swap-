/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:43:08 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 12:56:13 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	bonus_check(t_list **a, int n)
{
	if (ft_is_sorted(a) == 0 && ft_lstsize(*a) == n)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "KO\n", 3);
		exit(1);
	}
}

void	ft_read(t_list **a, t_list **b)
{
	char	*str1;

	while (1)
	{
		str1 = get_next_line(0);
		if (str1 == NULL)
			break ;
		ft_do_move(str1, a, b);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**str;
	int		i;
	int		y;

	i = 0;
	(void)ac;
	if (!av[1])
	{
		write(2, "", 0);
		exit(1);
	}
	str = ft_check_args(av);
	while (str[i] != NULL)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoi(str[i])));
		i++;
	}
	ft_free_str(str);
	y = ft_lstsize(stack_a);
	ft_read(&stack_a, &stack_b);
	bonus_check(&stack_a, y);
	ft_free_stack(&stack_a);
}
