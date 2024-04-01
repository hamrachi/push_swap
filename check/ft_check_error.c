/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamrachi <hamrachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 03:32:09 by hamrachi          #+#    #+#             */
/*   Updated: 2024/03/23 22:42:22 by hamrachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static int	ft_compare(char *s1, char *s2)
{
	long r;
	long s;

	r = ft_atoi(s1);
	s = ft_atoi(s2);
	if ((r < -2147483648 || r > 2147483647))
		return (1);
	if (r == s)
		return(1);
		
	return(0);
}
static int	ft_check_pos_neg(char *str)
{
	int i;

	i = 0;
	if ((str[i] == '+' && str[i + 1] != '\0') || (str[i] == '-' && str[i + 1] != '\0'))
		i++;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		i++;
	}
	return(0);
}
static int	ft_Secondchecker(char *str)
{
	int i;
	int j;
	long tmp;
	char **new;

	new = ft_split(str , ' ');
	i = 0;
	while(new[i])
	{
		if (ft_check_pos_neg(new[i]) == 1)
			return(freememory(new,ft_counter(str,' '),1));
		tmp = ft_atoi(new[i]);
		if (tmp < -2147483648 || tmp > 2147483647)
			return(freememory(new,ft_counter(str,' '),1));
		j = i + 1;
		while (new[i] && new[j])
		{
			if(ft_compare(new[i], new[j]))
				return(freememory(new,ft_counter(str,' '),1));
			j++;
		}
		i++;
	}
	return(freememory(new,ft_counter(str,' '),0));
}
static int	ft_Firstchecker(char *str)
{
    int i = 0;

	if (str[i] == 0)
		return (1);
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
    {
		if (!ft_isdigit(str[i]))
            return (1);
        i++;
    }
    return(0);
}
int freememory(char **s,int c,int g)
{
	int i;

	i = 0;
	while(i < c)
		free(s[i++]);
	free(s);
	return (g);
}
void    ft_check_error(char *s)
{
	if (ft_Firstchecker(s))
        ft_show_error("Error");
    if (ft_Secondchecker(s))
		ft_show_error("Error");
}