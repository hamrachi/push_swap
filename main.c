/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 00:11:32 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/12 22:51:28 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	leaks()
{
	system("leaks push_swap");
}
// static char	*ft_args_join(int argc, char **argv)
// {
// 	int i;
// 	char *str;

// 	i = 1;
//     while (i < argc)
//     {
//         if (argv[i][0] == 0 || ft_counter(argv[i], ' ') == 0 )
//             ft_show_error("Error0");
//         str = ft_strjoin(str, argv[i]);
//         i++;
//     }
// 	return (str);
// }
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
        printf("Index: %d ==> %d\n", tmp->index, tmp->content);
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

int main(int argc, char **argv)
{
    int i;
    char *str;
    t_list  *stacka;
    t_list  *stackb;
    
    if (argc == 1)
        return (0);
    i = 1;
    while (i < argc)
    {
        if (argv[i][0] == 0 || ft_counter(argv[i], ' ') == 0 )
            ft_show_error("Error0");
        str = ft_strjoin(str, argv[i]);
        i++;
    }
	//str = ft_args_join(argc, argv);
	//printf ("%s", str);
    ft_check_error(str);
    ft_fullstack(&stacka, str);
    ft_indexing(stacka);
   
    //ft_print_stack(stacka);
    //swap(&stacka);
    // stackb = ft_lstnew(0,0);
    push(&stacka, &stackb);
    rotate(&stacka);
    revers_rotate(&stacka);
    printf("staca after ------------\n");
    pa(&stacka,&stackb);
    //ft_sorting(&stacka, &stackb);
    ft_print_stack(stacka);
    printf("stackb ------------\n");
    ft_print_stack(stackb);
    
    ft_free_stack(stacka);
	free(str);
    atexit(leaks);
}