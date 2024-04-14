/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsorting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:55:18 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:58:28 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_sorting_push_b(t_list **a, t_list **b)
	{
	int i;
	int c;

	c = index_plus(a);
	i = 1;
	while(ft_lstsize(*a) > 0)
	{
		if ((*a)->index <= i)                                                                                                                         
		{
			pb(a,b);
			i++;
		}
		else if((*a)->index < (i + c))
		{
			pb(a,b);
			rb(b); 
			i++;
		}
		else
			ra(a);
	}
}


void	ft_sorting_push_a(t_list **a, t_list **b)
{
	int max;
	// t_list *tmp;

	// tmp = *b;
	max = ft_lstsize(*b);
	
	while (ft_lstsize(*b) > 0)
	{
		if ((*b)->index == max)
		{
			pa(a,b);
			max--;
		}
		else if (ft_check_max(b, max) == 0)
			rb(b);
		else
			rrb(b);
	}
}


void ft_sorting(t_list **a, t_list **b)
{
	if (!ft_check_sorted(a))
		return;
	else if (ft_lstsize(*a) == 2)
		sa(a);
	else if (ft_lstsize(*a) == 3)
		ft_sorting_three(a);
	else if (ft_lstsize(*a) == 4)
		ft_sorting_four(a,b);
	else if(ft_lstsize(*a) == 5)
		ft_sorting_five(a,b);
	else
	{
		ft_sorting_push_b(a, b);
		ft_sorting_push_a(a, b);
	}
}
