/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:57:16 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/13 17:31:34 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	ft_check_space(char **av)
{
	int	i;
	int	y;

	i = 0;
	while (av[i])
	{
		y = 0;
		while (av[i][y] == ' ' && av[i][y])
		{
			if (av[i][y + 1] == '\0')
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}

int	ft_check_duplicate(char **args)
{
	int	i;
	int	j;

	i = 0;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_int(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_atoi(str[i]) > 2147483647 || ft_atoi(str[i]) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_nums(char **args)
{
	int	i;
	int	y;

	i = 0;
	while (args[i])
	{
		y = 0;
		while (args[i][y])
		{
			if (args[i][y] == '+' || args[i][y] == '-')
			{
				if (y != 0)
					return (1);
				else if (ft_isdigit(args[i][1]) == 0)
					return (1);
				y++;
			}
			else if (ft_isdigit(args[i][y]) != 1)
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}
