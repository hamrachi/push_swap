/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:32:17 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:37:50 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **lsta, t_list **lstb)
{
	t_list *heada;

	if (!lsta || !(*lsta) || !lstb)
		return ;
	heada = *lsta;
	*lsta = heada -> next;
	heada -> next = NULL;
	ft_lstadd_front(lstb, heada);
}

void	pb(t_list **a, t_list **b)
{
	write(1, "pb\n", 3);
	push(a, b);
}

void	pa(t_list **a, t_list **b)
{
	write(1, "pa\n", 3);
	push(b, a);
}
