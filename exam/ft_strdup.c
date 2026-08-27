/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erinribe <erinribe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:01:50 by erinribe          #+#    #+#             */
/*   Updated: 2026/08/20 19:13:26 by erinribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char    *ft_strdup(char *src)
{
    int     i;
    char    *res;

    i = 0;
    res = malloc(sizeof(char) * strlen(src) + 1);
    while(src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0'
    return(res)
}