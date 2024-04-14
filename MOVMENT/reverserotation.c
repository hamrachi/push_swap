/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:40:08 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:44:35 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	revers_rotate(t_list **a)
{
	t_list *tmp1;
	t_list *tmp2;

	if (!(*a) && !(*a)->next)
		return;
	tmp1 = *a;
	tmp2 = ft_lstlast(tmp1);
	tmp1 = ft_lstlast2(tmp1);
	tmp2 -> next = NULL;
	ft_lstadd_front(a, tmp1);
}

void	rra(t_list **a)
{
	write(1 ,"rra\n", 4);
	revers_rotate(a);
}

void	rrb(t_list **b)
{
	write(1 ,"rrb\n", 4);
	revers_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	write(1 ,"rrr\n", 4);
	revers_rotate(a);
	revers_rotate(b);
}
