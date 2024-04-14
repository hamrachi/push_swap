/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsorting_five.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 10:48:58 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:51:24 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sorting_three(t_list **a)
{
	t_list *tmp;
	int		max;

	tmp = *a;
	max = ft_check_max_node(a);
	if((tmp -> index) == max )
		ra(a);
	else if ((tmp -> next -> index) == max)
		rra(a);
	tmp = *a;
	if((tmp -> index) > (tmp -> next -> index) )
		sa(a);
}

void	ft_sorting_four(t_list **a, t_list **b)
{
	int max;
	int i;

	i = 0;
	max = ft_check_max_node(a);
	while (i < max)
	{
		if ((*a) -> index < 2)
		{
			pb(a,b);
			break;
		}
		else
			ra(a);
		i++;
	}
	ft_sorting_three(a);
	pa(a,b);
}

void ft_sorting_five(t_list **a ,t_list **b)
{
	int		max;
	int		i;

	max = ft_check_max_node(a);
	i = 0;
	while (i < max)
	{
		if (((*a) -> index) < 3)
		{
			pb(a,b);
		}
		else
			ra(a);
		i++;
	}
	ft_sorting_three(a);
	if (ft_check_sorted(b) == 0)
		rb(b);
	pa(a,b);
	pa(a,b);
}
