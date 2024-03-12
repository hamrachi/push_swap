/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fsorting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 00:55:18 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/12 22:45:38 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_sorting(t_list **a, t_list **b)
{
    
    // size_t  diameter;
    size_t i;
    int j;
    t_list *tmpa;
    t_list *tmp;
    t_list *tmpb;

    tmpa = *a;
    tmp = tmpa;
    tmpb = *b;
	j =  ft_lstsize(tmp);
    i = 1;
	while(tmpa && j > 0)
	{
		if ((tmpa -> index) <= i)
		{
			pa(&tmpa, &tmpb);
			i++;
		}
		else if((tmpa -> index) <= (i + 10) && j <= 100)
		{
			pa(&tmpa, &tmpb);
			rb(tmpb); 
			i++;
		}
		// else if((tmpa -> index) <= (i + 30) && j <= 500)
		// {
		// 	pa(&tmpa, &tmpb);
		// 	rb(tmpb);
		// 	i++;
		// }
		// else if((tmpa -> index) <= (i + 60) && j <= 1000)
		// {
		// 	pa(&tmpa, &tmpb);
		// 	rb(tmpb); 
		// 	i++;
		// }
		// else
		// {
		// 	rra(&tmpa);
		// 	i++;
		// }
		tmpa = tmpa -> next;
	}
}