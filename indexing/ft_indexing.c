/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:29:45 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/11 05:48:17 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_indexing(t_list *a)
{
    t_list *tmp1;
    t_list *tmp2;
    
    tmp1 = a;
    while (tmp1)
    {
        tmp1 -> index = 1;
        tmp2 = a;
        while (tmp2)
        {
            if(tmp1 -> content > tmp2 -> content)
                tmp1 -> index += 1;
            tmp2 = tmp2 -> next;
        }
        tmp1 = tmp1 -> next;
    }
}