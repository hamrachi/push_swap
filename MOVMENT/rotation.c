/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:28:52 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:37:46 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **a)
{
	t_list *tmp;

	if (!(*a) || !(*a)->next)
		return ;
	tmp = *a;
	*a = tmp -> next;
	tmp -> next = NULL;
	ft_lstadd_back(a, tmp);
}

void	ra(t_list **a)
{
	write(1 , "ra\n", 3);
	rotate(a);
}

void	rb(t_list **b)
{
	write(1 , "rb\n", 3);
	rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	write(1, "rr\n", 3);
	rotate(a);
	rotate(b);
}
