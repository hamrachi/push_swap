/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:27:10 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:27:50 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *a;
	tmp2 = tmp -> next;
	*a = tmp2 -> next;
	tmp -> next = NULL;
	tmp2 -> next = NULL;
	ft_lstadd_front(a, tmp);
	ft_lstadd_front(a, tmp2);
}

void	sa(t_list **lsta)
{
	if (ft_lstsize(*lsta) < 2)
		return;
	swap(lsta);
	ft_putendl_fd("sa", 1);
}

void sb(t_list **lstb)
{
	if (ft_lstsize(*lstb) < 2)
		return;
	swap(lstb);
	ft_putendl_fd("sb", 1);
}

void	ss(t_list **lsta, t_list **lstb)
{
	if (ft_lstsize(*lsta) < 2 || ft_lstsize(*lstb) < 2)
		return;
	swap(lsta);
	swap(lstb);
	ft_putendl_fd("ss", 1);
}
