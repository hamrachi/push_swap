/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsorting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:55:18 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/16 21:46:26 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	index_plus(t_list **a)
{
	int j;

	if (ft_lstsize(*a) <= 100)
		j = 15;
	else if (ft_lstsize(*a) > 100)
		j = 35;
	return(j);
}

void    ft_sorting_push_b(t_list **a, t_list **b)
	{
	size_t i;
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
		else if((*a)->index <= (i + c))
		{
			pb(a,b);
			rb(b); 
			i++;
		}
		else
			ra(a);
	}
}

int	ft_check_max(t_list *b ,int max)
{
	t_list *tmp;
	tmp = b;
	size_t i = 0;
	size_t j = ft_lstsize(b)/2;
	while(i < j)
	{
		if(tmp->index == max)
			return(0);
		tmp = tmp->next;
		i++;
	}
	return(1);
}
void	ft_sorting_push_a(t_list **a, t_list **b)
{
	size_t max;
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
		else if (ft_check_max(*b, max) == 0)
			rb(b);
		else
			rrb(b);
	}
}

void ft_sorting(t_list **a, t_list **b)
{
	ft_sorting_push_b(a, b);
	ft_sorting_push_a(a, b);
}
