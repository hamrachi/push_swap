/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 01:27:32 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 11:00:27 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "LIBFT/libft.h"
#include <stdio.h>     

void    ft_check_error(char *s);
void    ft_indexing(t_list *a);
void	ft_show_error(char *msg);
int     freememory(char **s,int c,int g);
void    ft_fullstack(t_list **a, char *s);
void	ft_print_stack(t_list *a);
void	swap(t_list **a);
void	sa(t_list **lsta);
void    sb(t_list **lstb);
void	ss(t_list **lsta, t_list **lstb);
void    push(t_list **lsta, t_list **lstb);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void    rotate(t_list **a);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	revers_rotate(t_list **a);
void    rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
t_list  *ft_lstlast2(t_list *lst);
void    ft_sorting_push_b(t_list **a, t_list **b);
void	ft_sorting_push_a(t_list **a, t_list **b);
void    ft_sorting(t_list **a, t_list **b);
void	ft_sorting_three(t_list **a);
void	ft_sorting_four(t_list **a, t_list **b);
void    ft_sorting_five(t_list **a ,t_list **b);
int     index_plus(t_list **a);
int     ft_check_max(t_list **b ,int max);
int     ft_check_sorted(t_list **a);
int     ft_check_max_node(t_list **a);
# endif