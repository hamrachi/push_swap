/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:11:32 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/04 00:24:31 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	leaks()
{
	system("leaks push_swap");
}
void	ft_fullstack(t_list **a, char *s)
{
    int		i;
    char	**array;
    
    array = ft_split(s, ' ');
    i = 0;
    while (array[i])
    {
        ft_lstadd_back(a, ft_lstnew(ft_atoi(array[i]),33));
        i++;
	}
	i = 0;
	while (i  < ft_counter(s , ' '))
		free(array[i++]);
	free(array);
	
}
void	ft_print_stack(t_list *a)
{
    t_list *tmp;

    tmp = a;
    while (tmp)
    {
       // printf("Index: %d ==> %d\n", tmp->index, tmp->content);
        tmp = tmp->next;
    }
}
 
void	ft_free_stack(t_list *a)
{
    t_list *tmp;
    t_list *to_free;

    tmp = a;
    while (tmp)
    {
        to_free = tmp -> next;
        free(tmp);
        tmp = to_free;
    }
	a = NULL;
}
char    *ft_join_args(int argc, char **argv)
{
    int i;
    char *str;

    i = 1;
    while (i < argc)
    {
        if (argv[i][0] == 0 || ft_counter(argv[i], ' ') == 0 )
            ft_show_error("Error");
        str = ft_strjoin(str, argv[i]);
        i++;
    }
    return (str);
}
int main(int argc, char **argv)
{
    //int i;
    //int j;
    char *str;
    t_list  *stacka;
    t_list  *stackb;
    
    if (argc == 1)
        return (0);
    str = ft_join_args(argc, argv);
    ft_check_error(str);
    ft_fullstack(&stacka, str);
    ft_indexing(stacka);
   
    //ft_print_stack(stacka);
    //swap(&stacka);
    // stackb = ft_lstnew(0,0);
    //push(&stacka, &stackb);
    // rotate(&stacka);
    //revers_rotate(&stacka);
    //printf("staca after ------------\n");
    //push(&stacka,&stackb);
    //j = ft_lstsize(stacka);
    // i = 0;
    //ft_print_stack(stacka);
    //printf("staca after ------------\n");
    //rb(&stacka);
    // while(stacka && i < 5)
    // {
    //     ra(stacka);
    //     i++;
    // }
    //ft_print_stack(stacka);
    ft_sorting(&stacka, &stackb);
    
    //printf("stackb ------------\n");
    //ft_print_stack(stackb);
    //printf("stacka ------------\n");
    ft_print_stack(stacka);
    ft_free_stack(stacka);
    ft_free_stack(stackb);
	free(str);
    // atexit(leaks);
}