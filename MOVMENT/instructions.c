/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 01:37:37 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/12 22:46:31 by hamrachi         ###   ########.fr       */
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

void	sa(t_list *lsta)
{
	if (ft_lstsize(lsta) < 2)
		return;
	swap(&lsta);
	ft_putendl_fd("sa", 1);
	return;
}

int sb(t_list *lstb)
{
	if (ft_lstsize(lstb) < 2)
		return(1);
	swap(&lstb);
	ft_putendl_fd("sb", 1);
	return(0);
}

int ss(t_list *lsta, t_list *lstb)
{
	if (ft_lstsize(lsta) < 2 || ft_lstsize(lstb) < 2)
		return(1);
	swap(&lsta);
	swap(&lstb);
	ft_putendl_fd("ss", 1);
	return(0);
}

void	push(t_list **lsta, t_list **lstb)
{
	t_list *heada;

	heada = *lsta;
	*lsta = heada -> next;
	heada -> next = NULL;
	ft_lstadd_front(lstb, heada);
	free(heada);
}

void	pa(t_list **a, t_list **b)
{
	write(1, "pa\n", 3);
	push(a, b);
}

void	pb(t_list **a, t_list **b)
{
	write(1, "pb\n", 3);
	push(b, a);
}

void	rotate(t_list **a)
{
	t_list *tmp;

	tmp = *a;
	*a = tmp -> next;
	tmp -> next = NULL;
	ft_lstadd_back(a, tmp);
}

void	ra(t_list *a)
{
	write(1 , "ra\n", 3);
	rotate(&a);
}

void	rb(t_list *b)
{
	write(1 , "rb\n", 3);
	rotate(&b);
}

void	rr(t_list *a, t_list *b)
{
	write(1, "rr\n", 3);
	rotate(&a);
	rotate(&b);
}

static t_list	*ft_lstlat2(t_list *lst)
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

void	revers_rotate(t_list **a)
{
	t_list *tmp;
	t_list *tmp2;

	tmp = *a;
	tmp2 = ft_lstlast(tmp);
	tmp = ft_lstlat2(tmp);
	tmp2 -> next = NULL;
	//printf("tmp = %d\n", tmp -> content);
	ft_lstadd_front(a, tmp);
}

void	rra(t_list **a)
{
	write(1 ,"rra\n", 4);
	revers_rotate(a);
}

void	rrb(t_list **b)
{
	write(1 ,"rrb\n", 4);
	revers_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	write(1 ,"rrr\n", 4);
	revers_rotate(a);
	revers_rotate(b);
}
