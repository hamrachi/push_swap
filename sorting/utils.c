/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:48:06 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:58:59 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int index_plus(t_list **a)
{
	int j;

	j = 0;
	if (ft_lstsize(*a) <= 100)
		j = 15;
	else if (ft_lstsize(*a) > 100)
		j = 30;
	return(j);
}

int	ft_check_max(t_list **b ,int max)
{
	t_list *tmp;
	size_t i;
	size_t	j;

	tmp = *b;
	i = 0;
	j = ft_lstsize(*b)/2;
	while(i < j)
	{
		if(tmp->index == max)
			return(0);
		tmp = tmp->next;
		i++;
	}
	return(1);
}

int	ft_check_sorted(t_list **a)
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = *a;
	tmp2 = tmp1 -> next;
	while (tmp1 && tmp2)
	{
		if ((tmp1 -> index) > (tmp2 -> index))
			return (1);
		tmp1 = tmp1 -> next;
		tmp2 = tmp2 -> next;
	}
	return(0);
}

int ft_check_max_node(t_list **a)
{
	t_list *tmp;
	int max;

	tmp = *a;
	max = tmp -> index;
	while (tmp)
	{
		if (tmp -> index > max)
			max = tmp -> index;
		tmp = tmp -> next;
	}
	return (max);
}
