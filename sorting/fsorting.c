/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsorting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:55:18 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/04 00:17:47 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <libc.h>
int	index_plus(t_list **a)
{
	int j;

	j = 0;
	if (ft_lstsize(*a) <= 100)
		j = 15;
	else if (ft_lstsize(*a) > 100)
		j = 30;
	return(j);
}

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
static int	ft_check_sorted(t_list **a)
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

static int ft_check_max_node(t_list **a)
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
static void	ft_sorting_three(t_list **a)
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
static void	ft_sorting_four(t_list **a, t_list **b)
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
static void ft_sorting_five(t_list **a ,t_list **b)
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
