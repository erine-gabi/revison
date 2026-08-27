/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occA.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:20:48 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/20 19:57:03 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_occa(char *str)
{
    int     i;
    int     count;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(str[i] == 'a')
            count++;
        i++;
    }
    return(count);
}

#include<stdio.h>

int     main(void)
{
    char	res;
	
	res = ft_occa("salut");
	printf("%d", res);
	return(0);
}