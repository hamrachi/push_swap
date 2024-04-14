/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 02:13:21 by hamrachi          #+#    #+#             */
/*   Updated: 2024/04/05 02:01:38 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char    *ft_join_str(int argc, char **argv)
{
    int i;
    char *str;

    if (argc < 2)
        return;
    i = 0;
    while (i < argc)
    {
        if (argv[i][0] == 0 || ft_counter(argv[i], ' ') == 0)
            ft_show_error("Error");
        str = ft_strjoin(str,argv[i]);
        i++;   
    }
}
int main(int argc, char **argv)
{
    t_list *stacka;
    char *str;

    str = ft_join_args(argc, argv);
    printf("%s\n",str);
}