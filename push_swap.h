/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:53:36 by mhabib-a          #+#    #+#             */
/*   Updated: 2023/02/14 13:08:48 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<unistd.h>

typedef struct stack_a
{
	int				content;
	int				index;
	int				position;
	int				to_a;
	int				from_b;
	int				moves_b;
	int				moves_a;
	int				total_moves;
	struct stack_a	*back;
	struct stack_a	*next;
}	t_list;

char	*join(char const *s1, char const *s2);
char	*get_next_line(int fd);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
char	**ft_split(char const *s, char c);
char	**ft_check_args(char **av);
char	*ft_strjoin(char *s1, char const *s2);
char	*ft_strdup(const char *s);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
long	ft_atoi(const char *str);
void	ft_rotate(t_list **lst);
void	ra(t_list **lst);
void	rb(t_list **lst);
void	ft_swap(t_list **lst);
void	sa(t_list **lst);
void	sb(t_list **lst);
void	ss(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	ft_rotate_rev(t_list **lst);
void	rra(t_list **lst);
void	rrb(t_list **lst);
void	rrr(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
char	*ft_join(char **av);
int		ft_check_space(char **av);
int		ft_check_nums(char **args);
int		ft_check_duplicate(char **args);
int		ft_isdigit(int c);
int		ft_find_small(t_list **lst);
int		ft_lstsize(t_list *lst);
int		ft_find_place(int min, t_list **lst);
void	ft_sort(t_list **a, t_list **b);
int		ft_is_sorted(t_list **a);
int		ft_find_biggest(t_list **lst);
void	ft_push(t_list **a, t_list **b);
void	ft_places(int n, t_list **a, t_list **b);
void	ft_to_position(t_list **a, t_list **b);
int		ft_find_place(int min, t_list **a);
void	ft_positions(t_list **a, t_list **b);
int		get_longest(t_list **a);
void	ft_indexed(t_list **a, t_list **b, int len);
int		find_len(t_list **a);
int		ft_is_sorted(t_list **a);
int		find_len(t_list **a);
void	ft_indexed(t_list **a, t_list **b, int len);
int		get_longest(t_list **a);
void	ft_positions(t_list **a, t_list **b);
int		ft_min(t_list **a);
int		ft_max(t_list **a);
void	ft_total(t_list **a, t_list **b);
void	ft_to_a(int n, t_list **a, t_list **b);
void	ft_from_b(int n, t_list **b);
void	ft_do_rr(int n, t_list **a, t_list **b);
void	ft_do_rrr(int n, t_list **a, t_list **b);
void	sort_3(t_list **a);
void	ft_sort5(t_list **a, t_list **b);
int		ft_find(int n, t_list **a);
void	ft_free_str(char **str);
int		ft_check_int(char **str);
void	ft_pb(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	a_moves(t_list **a, t_list **b);
void	swap(t_list **lst);
void	ft_rrv(t_list **lst);
void	ft_r(t_list **lst);
void	ft_rr(t_list **a, t_list **b);
void	ft_rrr(t_list **a, t_list **b);
void	ft_ss(t_list **a, t_list **b);
int		f_strcmp(char *s1, char *s2);
void	ft_do_move(char *str, t_list **a, t_list **b);
void	ft_error(void);
void	ft_free_stack(t_list **lst);
void	back(t_list **a);
#endif
