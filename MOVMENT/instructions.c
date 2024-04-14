/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:37:37 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/14 10:30:19 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstlast2(t_list *lst)
{
	if (!lst)
		return (NULL);
	
	while (lst -> next)
	{
		lst = lst -> next;
	}
	//printf("lst %d\n", lst -> content);
	return (lst);
}
